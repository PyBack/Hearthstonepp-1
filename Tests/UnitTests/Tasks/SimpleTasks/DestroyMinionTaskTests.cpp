// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Utils/TestUtils.hpp>
#include "gtest/gtest.h"

#include <hspp/Cards/Minion.hpp>
#include <hspp/Managers/GameAgent.hpp>
#include <hspp/Tasks/SimpleTasks/DestroyMinionTask.hpp>

using namespace Hearthstonepp;
using namespace SimpleTasks;
using namespace TestUtils;

TEST(DestroyMinionTask, GetTaskID)
{
    auto card = GenerateMinionCard("test", 1, 1);
    const DestroyMinionTask destroy(new Minion(card));
    EXPECT_EQ(destroy.GetTaskID(), +TaskID::DESTROY);
}

TEST(DestroyMinionTask, Run)
{
    GameAgent agent(CardClass::ROGUE, CardClass::DRUID, PlayerType::PLAYER1);
    Player& player1 = agent.GetPlayer1();

    std::vector<Card> cards;
    cards.reserve(5);

    const std::string name = "test";
    for (size_t i = 0; i < 5; ++i)
    {
        const auto id = static_cast<char>(i + 0x30);
        cards.emplace_back(GenerateMinionCard(name + id, 1, 1));
        player1.GetField().emplace_back(new Minion(cards[i]));
    }

    DestroyMinionTask destroy(player1.GetField()[2]);
    MetaData result = destroy.Run(player1);

    EXPECT_EQ(result, MetaData::DESTROY_MINION_SUCCESS);
    EXPECT_EQ(player1.GetField().size(), static_cast<size_t>(4));

    EXPECT_EQ(player1.GetField()[0]->card->id, name + '0');
    EXPECT_EQ(player1.GetField()[1]->card->id, name + '1');
    EXPECT_EQ(player1.GetField()[2]->card->id, name + '3');
    EXPECT_EQ(player1.GetField()[3]->card->id, name + '4');

    result = destroy.Run(player1);
    EXPECT_EQ(result, MetaData::DESTROY_MINION_NOT_FOUND);
}
