// This code is based on Sabberstone project.
// Copyright (c) 2017-2018 SabberStone Team, darkfriend77 & rnilva
// Hearthstone++ is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#include <hspp/Cards/Cards.hpp>
#include <hspp/Tasks/SimpleTasks/AddEnchantmentTask.hpp>

namespace Hearthstonepp::SimpleTasks
{
AddEnchantmentTask::AddEnchantmentTask(std::string&& cardID,
                                       EntityType entityType)
    : m_cardID(cardID), m_entityType(entityType)
{
    // Do nothing
}

TaskID AddEnchantmentTask::GetTaskID() const
{
    return TaskID::ADD_ENCHANTMENT;
}

MetaData AddEnchantmentTask::Impl(Player&)
{
    Card enchantmentCard = Cards::GetInstance().FindCardByID(m_cardID);
    if (enchantmentCard.id.empty())
    {
        return MetaData::NULLPTR;
    }

    Power* power = Cards::GetInstance().FindCardByID(m_cardID).power;
    if (power == nullptr)
    {
        return MetaData::NULLPTR;
    }

    power->GetEnchant()->ActivateTo(dynamic_cast<Character*>(m_target));

    return MetaData::ADD_ENCHANTMENT_SUCCESS;
}
}  // namespace Hearthstonepp::SimpleTasks