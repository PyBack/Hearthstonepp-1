// This code is based on Sabberstone project.
// Copyright (c) 2017-2018 SabberStone Team, darkfriend77 & rnilva
// Hearthstone++ is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#include <hspp/Tasks/SimpleTasks/DiscardTask.hpp>

#include <random>

namespace Hearthstonepp::SimpleTasks
{
DiscardTask::DiscardTask(EntityType entityType) : m_entityType(entityType)
{
    // Do nothing
}

TaskID DiscardTask::GetTaskID() const
{
    return TaskID::DISCARD;
}

MetaData DiscardTask::Impl(Player& player)
{
    if (m_entityType == +EntityType::HAND)
    {
        if (player.GetHand().empty())
        {
            return MetaData::DISCARD_MY_HAND_SUCCESS;
        }

        std::random_device rd;
        // ReSharper disable once CppLocalVariableMayBeConst
        // NOTE: 'const' occurs compile error on Linux and macOS
        std::uniform_int_distribution<size_t> dist(0,
                                                   player.GetHand().size() - 1);

        const size_t discardIdx = dist(rd);

        // Card Hand Index Verification
        if (discardIdx >= player.GetHand().size())
        {
            return MetaData::DISCARD_IDX_OUT_OF_RANGE;
        }

        player.GetHand().erase(player.GetHand().begin() + discardIdx);
        return MetaData::DISCARD_MY_HAND_SUCCESS;
    }

    return MetaData::INVALID;
}
}  // namespace Hearthstonepp::SimpleTasks