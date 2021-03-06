// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <hspp/Tasks/TaskWrapper.hpp>

namespace Hearthstonepp
{
DoBothPlayer::DoBothPlayer(ITask&& task) : m_task(task)
{
    // Do nothing
}

TaskID DoBothPlayer::GetTaskID() const
{
    return m_task.GetTaskID();
}

MetaData DoBothPlayer::Impl(Player& player)
{
    const MetaData status1 = m_task.Run(player);
    const MetaData status2 = m_task.Run(player.GetOpponent());

    if (status1 == status2)
    {
        return status1;
    }

    return status2;
}

DoUntil::DoUntil(ITask&& task, std::function<bool(const TaskMeta&)>&& condition)
    : m_task(task), m_condition(std::move(condition))
{
    // Do nothing
}

TaskID DoUntil::GetTaskID() const
{
    return m_task.GetTaskID();
}

MetaData DoUntil::Impl(Player& player)
{
    TaskMeta meta;

    while (true)
    {
        m_task.Run(player, meta);

        // Do until the condition satisfied
        if (m_condition(meta))
        {
            break;
        }
    }

    return meta.GetStatus();
}
}  // namespace Hearthstonepp