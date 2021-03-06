// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include "gtest/gtest.h"

#include <hspp/Managers/GameAgent.hpp>
#include <hspp/Tasks/SimpleTasks/DestroyWeaponTask.hpp>

using namespace Hearthstonepp;
using namespace SimpleTasks;

TEST(DestroyWeaponTask, GetTaskID)
{
    const DestroyWeaponTask destroy;
    EXPECT_EQ(destroy.GetTaskID(), +TaskID::DESTROY);
}

TEST(DestroyWeaponTask, Run)
{
    DestroyWeaponTask destroy;
    GameAgent agent(CardClass::ROGUE, CardClass::DRUID, PlayerType::PLAYER1);

    Card card;
    card.id = "weapon1";
    agent.GetPlayer1().GetHero()->weapon = new Weapon(card);

    MetaData result = destroy.Run(agent.GetPlayer1());
    EXPECT_EQ(result, MetaData::DESTROY_WEAPON_SUCCESS);
    EXPECT_EQ(agent.GetPlayer1().GetHero()->HasWeapon(), false);
}
