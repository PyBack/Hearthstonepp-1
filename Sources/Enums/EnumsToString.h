/*************************************************************************
> File Name: EnumsToString.h
> Project Name: Hearthstone++
> Author: Chan-Ho Chris Ohk
> Purpose: Converter from enumerations to std::string.
> Created Time: 2017/10/12
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#ifndef HEARTHSTONEPP_ENUMS_TO_STRING_H
#define HEARTHSTONEPP_ENUMS_TO_STRING_H

#include <Enums/Enums.h>

#include <map>
#include <string>

namespace Hearthstonepp
{
	const std::map<Rarity, std::string> ConverterFromRarityToString =
	{
		{ Rarity::INVALID,		"INVALID" },
		{ Rarity::COMMON,		"COMMON" },
		{ Rarity::FREE,			"FREE" },
		{ Rarity::RARE,			"RARE" },
		{ Rarity::EPIC,			"EPIC" },
		{ Rarity::LEGENDARY,	"LEGENDARY" },
		{ Rarity::UNKNOWN_6,	"UNKNOWN_6" }
	};

	const std::map<Faction, std::string> ConverterFromFactionToString =
	{
		{ Faction::INVALID,		"INVALID" },
		{ Faction::HORDE,		"HORDE" },
		{ Faction::ALLIANCE,	"ALLIANCE" },
		{ Faction::NEUTRAL,		"NEUTRAL" }
	};

	const std::map<CardSet, std::string> ConverterFromCardSetToString =
	{
		{ CardSet::INVALID,			"INVALID" },
		{ CardSet::TEST_TEMPORARY,	"TEST_TEMPORARY" },
		{ CardSet::CORE,			"CORE" },
		{ CardSet::EXPERT1,			"EXPERT1" },
		{ CardSet::HOF,				"HOF" },
		{ CardSet::REWARD,			"REWARD" },
		{ CardSet::MISSIONS,		"MISSIONS" },
		{ CardSet::DEMO,			"DEMO" },
		{ CardSet::NONE,			"NONE" },
		{ CardSet::CHEAT,			"CHEAT" },
		{ CardSet::BLANK,			"BLANK" },
		{ CardSet::DEBUG_SP,		"DEBUG_SP" },
		{ CardSet::PROMO,			"PROMO" },
		{ CardSet::NAXX,			"NAXX" },
		{ CardSet::FP1,				"FP1" },
		{ CardSet::PE1,				"PE1" },
		{ CardSet::GVG,				"GVG" },
		{ CardSet::FP2,				"FP2" },
		{ CardSet::BRM,				"BRM" },
		{ CardSet::TGT,				"TGT" },
		{ CardSet::PE2,				"PE2" },
		{ CardSet::TEMP1,			"TEMP1" },
		{ CardSet::CREDITS,			"CREDITS" },
		{ CardSet::HERO_SKINS,		"HERO_SKINS" },
		{ CardSet::TB,				"TB" },
		{ CardSet::SLUSH,			"SLUSH" },
		{ CardSet::LOE,				"LOE" },
		{ CardSet::OG,				"OG" },
		{ CardSet::OG_RESERVE,		"OG_RESERVE" },
		{ CardSet::KARA,			"KARA" },
		{ CardSet::KARA_RESERVE,	"KARA_RESERVE" },
		{ CardSet::GANGS,			"GANGS" },
		{ CardSet::GANGS_RESERVE,	"GANGS_RESERVE" },
		{ CardSet::UNGORO,			"UNGORO" },
		{ CardSet::ICECROWN,		"ICECROWN" }
	};

	const std::map<CardClass, std::string> ConverterFromCardClassToString =
	{
		{ CardClass::INVALID,		"INVALID" },
		{ CardClass::DEATHKNIGHT,	"DEATHKNIGHT" },
		{ CardClass::DRUID,			"DRUID" },
		{ CardClass::HUNTER,		"HUNTER" },
		{ CardClass::MAGE,			"MAGE" },
		{ CardClass::PALADIN,		"PALADIN" },
		{ CardClass::PRIEST,		"PRIEST" },
		{ CardClass::ROGUE,			"ROGUE" },
		{ CardClass::SHAMAN,		"SHAMAN" },
		{ CardClass::WARLOCK,		"WARLOCK" },
		{ CardClass::WARRIOR,		"WARRIOR" },
		{ CardClass::DREAM,			"DREAM" },
		{ CardClass::NEUTRAL,		"NEUTRAL" }
	};

	const std::map<CardType, std::string> ConverterFromCardTypeToString =
	{
		{ CardType::INVALID,		"INVALID" },
		{ CardType::GAME,			"GAME" },
		{ CardType::PLAYER,			"PLAYER" },
		{ CardType::HERO,			"HERO" },
		{ CardType::MINION,			"MINION" },
		{ CardType::SPELL,			"SPELL" },
		{ CardType::ABILITY,		"ABILITY" },
		{ CardType::ENCHANTMENT,	"ENCHANTMENT" },
		{ CardType::WEAPON,			"WEAPON" },
		{ CardType::ITEM,			"ITEM" },
		{ CardType::TOKEN,			"TOKEN" },
		{ CardType::HERO_POWER,		"HERO_POWER" }
	};

	const std::map<Race, std::string> ConverterFromRaceToString =
	{
		{ Race::INVALID,		"INVALID" },
		{ Race::BLOODELF,		"BLOODELF" },
		{ Race::DRAENEI,		"DRAENEI" },
		{ Race::DWARF,			"DWARF" },
		{ Race::GNOME,			"GNOME" },
		{ Race::GOBLIN,			"GOBLIN" },
		{ Race::HUMAN,			"HUMAN" },
		{ Race::NIGHTELF,		"NIGHTELF" },
		{ Race::ORC,			"ORC" },
		{ Race::TAUREN,			"TAUREN" },
		{ Race::TROLL,			"TROLL" },
		{ Race::UNDEAD,			"UNDEAD" },
		{ Race::WORGEN,			"WORGEN" },
		{ Race::GOBLIN2,		"GOBLIN2" },
		{ Race::MURLOC,			"MURLOC" },
		{ Race::DEMON,			"DEMON" },
		{ Race::SCOURGE,		"SCOURGE" },
		{ Race::MECHANICAL,		"MECHANICAL" },
		{ Race::ELEMENTAL,		"ELEMENTAL" },
		{ Race::OGRE,			"OGRE" },
		{ Race::BEAST,			"BEAST" },
		{ Race::PET,			"PET" },
		{ Race::TOTEM,			"TOTEM" },
		{ Race::NERUBIAN,		"NERUBIAN" },
		{ Race::PIRATE,			"PIRATE" },
		{ Race::DRAGON,			"DRAGON" }
	};

	const std::map<GameTag, std::string> ConverterFromGameTagToString =
	{
		{ GameTag::IGNORE_DAMAGE,									"IGNORE_DAMAGE" },
		{ GameTag::TAG_SCRIPT_DATA_NUM_1,							"TAG_SCRIPT_DATA_NUM_1" },
		{ GameTag::TAG_SCRIPT_DATA_NUM_2,							"TAG_SCRIPT_DATA_NUM_2" },
		{ GameTag::TAG_SCRIPT_DATA_ENT_1,							"TAG_SCRIPT_DATA_ENT_1" },
		{ GameTag::TAG_SCRIPT_DATA_ENT_2,							"TAG_SCRIPT_DATA_ENT_2" },
		{ GameTag::MISSION_EVENT,									"MISSION_EVENT" },
		{ GameTag::TIMEOUT,											"TIMEOUT" },
		{ GameTag::TURN_START,										"TURN_START" },
		{ GameTag::TURN_TIMER_SLUSH,								"TURN_TIMER_SLUSH" },
		{ GameTag::PREMIUM,											"PREMIUM" },
		{ GameTag::GOLD_REWARD_STATE,								"GOLD_REWARD_STATE" },
		{ GameTag::PLAYSTATE,										"PLAYSTATE" },
		{ GameTag::LAST_AFFECTED_BY,								"LAST_AFFECTED_BY" },
		{ GameTag::STEP,											"STEP" },
		{ GameTag::TURN,											"TURN" },
		{ GameTag::FATIGUE,											"FATIGUE" },
		{ GameTag::CURRENT_PLAYER,									"CURRENT_PLAYER" },
		{ GameTag::FIRST_PLAYER,									"FIRST_PLAYER" },
		{ GameTag::RESOURCES_USED,									"RESOURCES_USED" },
		{ GameTag::RESOURCES,										"RESOURCES" },
		{ GameTag::HERO_ENTITY,										"HERO_ENTITY" },
		{ GameTag::MAXHANDSIZE,										"MAXHANDSIZE" },
		{ GameTag::STARTHANDSIZE,									"STARTHANDSIZE" },
		{ GameTag::PLAYER_ID,										"PLAYER_ID" },
		{ GameTag::TEAM_ID,											"TEAM_ID" },
		{ GameTag::TRIGGER_VISUAL,									"TRIGGER_VISUAL" },
		{ GameTag::RECENTLY_ARRIVED,								"RECENTLY_ARRIVED" },
		{ GameTag::PROTECTED,										"PROTECTED" },
		{ GameTag::PROTECTING,										"PROTECTING" },
		{ GameTag::DEFENDING,										"DEFENDING" },
		{ GameTag::PROPOSED_DEFENDER,								"PROPOSED_DEFENDER" },
		{ GameTag::ATTACKING,										"ATTACKING" },
		{ GameTag::PROPOSED_ATTACKER,								"PROPOSED_ATTACKER" },
		{ GameTag::ATTACHED,										"ATTACHED" },
		{ GameTag::EXHAUSTED,										"EXHAUSTED" },
		{ GameTag::DAMAGE,											"DAMAGE" },
		{ GameTag::HEALTH,											"HEALTH" },
		{ GameTag::ATK,												"ATK" },
		{ GameTag::COST,											"COST" },
		{ GameTag::ZONE,											"ZONE" },
		{ GameTag::CONTROLLER,										"CONTROLLER" },
		{ GameTag::OWNER,											"OWNER" },
		{ GameTag::DEFINITION,										"DEFINITION" },
		{ GameTag::ENTITY_ID,										"ENTITY_ID" },
		{ GameTag::HISTORY_PROXY,									"HISTORY_PROXY" },
		{ GameTag::COPY_DEATHRATTLE,								"COPY_DEATHRATTLE" },
		{ GameTag::COPY_DEATHRATTLE_INDEX,							"COPY_DEATHRATTLE_INDEX" },
		{ GameTag::ELITE,											"ELITE" },
		{ GameTag::MAXRESOURCES,									"MAXRESOURCES" },
		{ GameTag::CARD_SET,										"CARD_SET" },
		{ GameTag::CARDTEXT_INHAND,									"CARDTEXT_INHAND" },
		{ GameTag::CARDNAME,										"CARDNAME" },
		{ GameTag::CARD_ID,											"CARD_ID" },
		{ GameTag::DURABILITY,										"DURABILITY" },
		{ GameTag::SILENCED,										"SILENCED" },
		{ GameTag::WINDFURY,										"WINDFURY" },
		{ GameTag::TAUNT,											"TAUNT" },
		{ GameTag::STEALTH,											"STEALTH" },
		{ GameTag::SPELLPOWER,										"SPELLPOWER" },
		{ GameTag::DIVINE_SHIELD,									"DIVINE_SHIELD" },
		{ GameTag::CHARGE,											"CHARGE" },
		{ GameTag::NEXT_STEP,										"NEXT_STEP" },
		{ GameTag::CLASS,											"CLASS" },
		{ GameTag::CARDRACE,										"CARDRACE" },
		{ GameTag::FACTION,											"FACTION" },
		{ GameTag::CARDTYPE,										"CARDTYPE" },
		{ GameTag::RARITY,											"RARITY" },
		{ GameTag::STATE,											"STATE" },
		{ GameTag::SUMMONED,										"SUMMONED" },
		{ GameTag::FREEZE,											"FREEZE" },
		{ GameTag::ENRAGED,											"ENRAGED" },
		{ GameTag::RECALL,											"RECALL" },
		{ GameTag::OVERLOAD,										"OVERLOAD" },
		{ GameTag::LOYALTY,											"LOYALTY" },
		{ GameTag::DEATH_RATTLE,									"DEATH_RATTLE" },
		{ GameTag::DEATHRATTLE,										"DEATHRATTLE" },
		{ GameTag::BATTLECRY,										"BATTLECRY" },
		{ GameTag::SECRET,											"SECRET" },
		{ GameTag::COMBO,											"COMBO" },
		{ GameTag::CANT_HEAL,										"CANT_HEAL" },
		{ GameTag::CANT_DAMAGE,										"CANT_DAMAGE" },
		{ GameTag::CANT_SET_ASIDE,									"CANT_SET_ASIDE" },
		{ GameTag::CANT_REMOVE_FROM_GAME,							"CANT_REMOVE_FROM_GAME" },
		{ GameTag::CANT_READY,										"CANT_READY" },
		{ GameTag::CANT_EXHAUST,									"CANT_EXHAUST" },
		{ GameTag::CANT_ATTACK,										"CANT_ATTACK" },
		{ GameTag::CANT_TARGET,										"CANT_TARGET" },
		{ GameTag::CANT_DESTROY,									"CANT_DESTROY" },
		{ GameTag::CANT_DISCARD,									"CANT_DISCARD" },
		{ GameTag::CANT_PLAY,										"CANT_PLAY" },
		{ GameTag::CANT_DRAW,										"CANT_DRAW" },
		{ GameTag::INCOMING_HEALING_MULTIPLIER,						"INCOMING_HEALING_MULTIPLIER" },
		{ GameTag::INCOMING_HEALING_ADJUSTMENT,						"INCOMING_HEALING_ADJUSTMENT" },
		{ GameTag::INCOMING_HEALING_CAP,							"INCOMING_HEALING_CAP" },
		{ GameTag::INCOMING_DAMAGE_MULTIPLIER,						"INCOMING_DAMAGE_MULTIPLIER" },
		{ GameTag::INCOMING_DAMAGE_ADJUSTMENT,						"INCOMING_DAMAGE_ADJUSTMENT" },
		{ GameTag::INCOMING_DAMAGE_CAP,								"INCOMING_DAMAGE_CAP" },
		{ GameTag::CANT_BE_HEALED,									"CANT_BE_HEALED" },
		{ GameTag::CANT_BE_DAMAGED,									"CANT_BE_DAMAGED" },
		{ GameTag::IMMUNE,											"IMMUNE" },
		{ GameTag::CANT_BE_SET_ASIDE,								"CANT_BE_SET_ASIDE" },
		{ GameTag::CANT_BE_REMOVED_FROM_GAME,						"CANT_BE_REMOVED_FROM_GAME" },
		{ GameTag::CANT_BE_READIED,									"CANT_BE_READIED" },
		{ GameTag::CANT_BE_EXHAUSTED,								"CANT_BE_EXHAUSTED" },
		{ GameTag::CANT_BE_ATTACKED,								"CANT_BE_ATTACKED" },
		{ GameTag::CANT_BE_TARGETED,								"CANT_BE_TARGETED" },
		{ GameTag::CANT_BE_DESTROYED,								"CANT_BE_DESTROYED" },
		{ GameTag::ATTACK_VISUAL_TYPE,								"ATTACK_VISUAL_TYPE" },
		{ GameTag::CARD_TEXT_IN_PLAY,								"CARD_TEXT_IN_PLAY" },
		{ GameTag::CANT_BE_SUMMONING_SICK,							"CANT_BE_SUMMONING_SICK" },
		{ GameTag::FROZEN,											"FROZEN" },
		{ GameTag::JUST_PLAYED,										"JUST_PLAYED" },
		{ GameTag::LINKED_ENTITY,									"LINKED_ENTITY" },
		{ GameTag::LINKEDCARD,										"LINKEDCARD" },
		{ GameTag::ZONE_POSITION,									"ZONE_POSITION" },
		{ GameTag::CANT_BE_FROZEN,									"CANT_BE_FROZEN" },
		{ GameTag::COMBO_ACTIVE,									"COMBO_ACTIVE" },
		{ GameTag::CARD_TARGET,										"CARD_TARGET" },
		{ GameTag::DEV_STATE,										"DEV_STATE" },
		{ GameTag::NUM_CARDS_PLAYED_THIS_TURN,						"NUM_CARDS_PLAYED_THIS_TURN" },
		{ GameTag::CANT_BE_TARGETED_BY_OPPONENTS,					"CANT_BE_TARGETED_BY_OPPONENTS" },
		{ GameTag::NUM_TURNS_IN_PLAY,								"NUM_TURNS_IN_PLAY" },
		{ GameTag::NUM_TURNS_LEFT,									"NUM_TURNS_LEFT" },
		{ GameTag::OUTGOING_DAMAGE_CAP,								"OUTGOING_DAMAGE_CAP" },
		{ GameTag::OUTGOING_DAMAGE_ADJUSTMENT,						"OUTGOING_DAMAGE_ADJUSTMENT" },
		{ GameTag::OUTGOING_DAMAGE_MULTIPLIER,						"OUTGOING_DAMAGE_MULTIPLIER" },
		{ GameTag::OUTGOING_HEALING_CAP,							"OUTGOING_HEALING_CAP" },
		{ GameTag::OUTGOING_HEALING_ADJUSTMENT,						"OUTGOING_HEALING_ADJUSTMENT" },
		{ GameTag::OUTGOING_HEALING_MULTIPLIER,						"OUTGOING_HEALING_MULTIPLIER" },
		{ GameTag::INCOMING_ABILITY_DAMAGE_ADJUSTMENT,				"INCOMING_ABILITY_DAMAGE_ADJUSTMENT" },
		{ GameTag::INCOMING_COMBAT_DAMAGE_ADJUSTMENT,				"INCOMING_COMBAT_DAMAGE_ADJUSTMENT" },
		{ GameTag::OUTGOING_ABILITY_DAMAGE_ADJUSTMENT,				"OUTGOING_ABILITY_DAMAGE_ADJUSTMENT" },
		{ GameTag::OUTGOING_COMBAT_DAMAGE_ADJUSTMENT,				"OUTGOING_COMBAT_DAMAGE_ADJUSTMENT" },
		{ GameTag::OUTGOING_ABILITY_DAMAGE_MULTIPLIER,				"OUTGOING_ABILITY_DAMAGE_MULTIPLIER" },
		{ GameTag::OUTGOING_ABILITY_DAMAGE_CAP,						"OUTGOING_ABILITY_DAMAGE_CAP" },
		{ GameTag::INCOMING_ABILITY_DAMAGE_MULTIPLIER,				"INCOMING_ABILITY_DAMAGE_MULTIPLIER" },
		{ GameTag::INCOMING_ABILITY_DAMAGE_CAP,						"INCOMING_ABILITY_DAMAGE_CAP" },
		{ GameTag::OUTGOING_COMBAT_DAMAGE_MULTIPLIER,				"OUTGOING_COMBAT_DAMAGE_MULTIPLIER" },
		{ GameTag::OUTGOING_COMBAT_DAMAGE_CAP,						"OUTGOING_COMBAT_DAMAGE_CAP" },
		{ GameTag::INCOMING_COMBAT_DAMAGE_MULTIPLIER,				"INCOMING_COMBAT_DAMAGE_MULTIPLIER" },
		{ GameTag::INCOMING_COMBAT_DAMAGE_CAP,						"INCOMING_COMBAT_DAMAGE_CAP" },
		{ GameTag::CURRENT_SPELLPOWER,								"CURRENT_SPELLPOWER" },
		{ GameTag::ARMOR,											"ARMOR" },
		{ GameTag::MORPH,											"MORPH" },
		{ GameTag::IS_MORPHED,										"IS_MORPHED" },
		{ GameTag::TEMP_RESOURCES,									"TEMP_RESOURCES" },
		{ GameTag::RECALL_OWED,										"RECALL_OWED" },
		{ GameTag::OVERLOAD_OWED,									"OVERLOAD_OWED" },
		{ GameTag::NUM_ATTACKS_THIS_TURN,							"NUM_ATTACKS_THIS_TURN" },
		{ GameTag::NEXT_ALLY_BUFF,									"NEXT_ALLY_BUFF" },
		{ GameTag::MAGNET,											"MAGNET" },
		{ GameTag::FIRST_CARD_PLAYED_THIS_TURN,						"FIRST_CARD_PLAYED_THIS_TURN" },
		{ GameTag::MULLIGAN_STATE,									"MULLIGAN_STATE" },
		{ GameTag::TAUNT_READY,										"TAUNT_READY" },
		{ GameTag::STEALTH_READY,									"STEALTH_READY" },
		{ GameTag::CHARGE_READY,									"CHARGE_READY" },
		{ GameTag::CANT_BE_TARGETED_BY_SPELLS,						"CANT_BE_TARGETED_BY_SPELLS" },
		{ GameTag::CANT_BE_TARGETED_BY_ABILITIES,					"CANT_BE_TARGETED_BY_ABILITIES" },
		{ GameTag::SHOULDEXITCOMBAT,								"SHOULDEXITCOMBAT" },
		{ GameTag::CREATOR,											"CREATOR" },
		{ GameTag::CANT_BE_SILENCED,								"CANT_BE_SILENCED" },
		{ GameTag::CANT_BE_DISPELLED,								"CANT_BE_DISPELLED" },
		{ GameTag::DIVINE_SHIELD_READY,								"DIVINE_SHIELD_READY" },
		{ GameTag::PARENT_CARD,										"PARENT_CARD" },
		{ GameTag::NUM_MINIONS_PLAYED_THIS_TURN,					"NUM_MINIONS_PLAYED_THIS_TURN" },
		{ GameTag::PREDAMAGE,										"PREDAMAGE" },
		{ GameTag::COLLECTIBLE,										"COLLECTIBLE" },
		{ GameTag::TARGETING_ARROW_TEXT,							"TARGETING_ARROW_TEXT" },
		{ GameTag::ENCHANTMENT_BIRTH_VISUAL,						"ENCHANTMENT_BIRTH_VISUAL" },
		{ GameTag::ENCHANTMENT_IDLE_VISUAL,							"ENCHANTMENT_IDLE_VISUAL" },
		{ GameTag::CANT_BE_TARGETED_BY_HERO_POWERS,					"CANT_BE_TARGETED_BY_HERO_POWERS" },
		{ GameTag::WEAPON,											"WEAPON" },
		{ GameTag::INVISIBLE_DEATHRATTLE,							"InvisibleDeathrattle" },
		{ GameTag::HEALTH_MINIMUM,									"HEALTH_MINIMUM" },
		{ GameTag::TAG_ONE_TURN_EFFECT,								"TAG_ONE_TURN_EFFECT" },
		{ GameTag::SILENCE,											"SILENCE" },
		{ GameTag::COUNTER,											"COUNTER" },
		{ GameTag::ARTISTNAME,										"ARTISTNAME" },
		{ GameTag::LOCALIZATION_NOTES,								"LOCALIZATION_NOTES" },
		{ GameTag::HAND_REVEALED,									"HAND_REVEALED" },
		{ GameTag::IMMUNE_TO_SPELL_POWER,							"ImmuneToSpellpower" },
		{ GameTag::ADJACENT_BUFF,									"ADJACENT_BUFF" },
		{ GameTag::FLAVORTEXT,										"FLAVORTEXT" },
		{ GameTag::FORCED_PLAY,										"FORCED_PLAY" },
		{ GameTag::LOW_HEALTH_THRESHOLD,							"LOW_HEALTH_THRESHOLD" },
		{ GameTag::IGNORE_DAMAGE_OFF,								"IGNORE_DAMAGE_OFF" },
		{ GameTag::GRANT_CHARGE,									"GRANT_CHARGE" },
		{ GameTag::SPELLPOWER_DOUBLE,								"SPELLPOWER_DOUBLE" },
		{ GameTag::HEALING_DOUBLE,									"HEALING_DOUBLE" },
		{ GameTag::NUM_OPTIONS_PLAYED_THIS_TURN,					"NUM_OPTIONS_PLAYED_THIS_TURN" },
		{ GameTag::NUM_OPTIONS,										"NUM_OPTIONS" },
		{ GameTag::TO_BE_DESTROYED,									"TO_BE_DESTROYED" },
		{ GameTag::HEAL_TARGET,										"HEAL_TARGET" },
		{ GameTag::AURA,											"AURA" },
		{ GameTag::POISONOUS,										"POISONOUS" },
		{ GameTag::HOW_TO_EARN,										"HOW_TO_EARN" },
		{ GameTag::HOW_TO_EARN_GOLDEN,								"HOW_TO_EARN_GOLDEN" },
		{ GameTag::TAG_HERO_POWER_DOUBLE,							"TAG_HERO_POWER_DOUBLE" },
		{ GameTag::HERO_POWER_DOUBLE,								"HERO_POWER_DOUBLE" },
		{ GameTag::TAG_AI_MUST_PLAY,								"TAG_AI_MUST_PLAY" },
		{ GameTag::AI_MUST_PLAY,									"AI_MUST_PLAY" },
		{ GameTag::NUM_MINIONS_PLAYER_KILLED_THIS_TURN,				"NUM_MINIONS_PLAYER_KILLED_THIS_TURN" },
		{ GameTag::NUM_MINIONS_KILLED_THIS_TURN,					"NUM_MINIONS_KILLED_THIS_TURN" },
		{ GameTag::AFFECTED_BY_SPELL_POWER,							"AFFECTED_BY_SPELL_POWER" },
		{ GameTag::EXTRA_DEATHRATTLES,								"EXTRA_DEATHRATTLES" },
		{ GameTag::START_WITH_1_HEALTH,								"START_WITH_1_HEALTH" },
		{ GameTag::IMMUNE_WHILE_ATTACKING,							"IMMUNE_WHILE_ATTACKING" },
		{ GameTag::MULTIPLY_HERO_DAMAGE,							"MULTIPLY_HERO_DAMAGE" },
		{ GameTag::MULTIPLY_BUFF_VALUE,								"MULTIPLY_BUFF_VALUE" },
		{ GameTag::CUSTOM_KEYWORD_EFFECT,							"CUSTOM_KEYWORD_EFFECT" },
		{ GameTag::TOPDECK,											"TOPDECK" },
		{ GameTag::CANT_BE_TARGETED_BY_BATTLECRIES,					"CANT_BE_TARGETED_BY_BATTLECRIES" },
		{ GameTag::SHOWN_HERO_POWER,								"SHOWN_HERO_POWER" },
		{ GameTag::OVERKILL,										"OVERKILL" },
		{ GameTag::HERO_POWER,										"HERO_POWER" },
		{ GameTag::DEATHRATTLE_RETURN_ZONE,							"DEATHRATTLE_RETURN_ZONE" },
		{ GameTag::DEATHRATTLE_SENDS_BACK_TO_DECK,					"DEATHRATTLE_SENDS_BACK_TO_DECK" },
		{ GameTag::STEADY_SHOT_CAN_TARGET,							"STEADY_SHOT_CAN_TARGET" },
		{ GameTag::DISPLAYED_CREATOR,								"DISPLAYED_CREATOR" },
		{ GameTag::POWERED_UP,										"POWERED_UP" },
		{ GameTag::SPARE_PART,										"SPARE_PART" },
		{ GameTag::FORGETFUL,										"FORGETFUL" },
		{ GameTag::CAN_SUMMON_MAXPLUSONE_MINION,					"CAN_SUMMON_MAXPLUSONE_MINION" },
		{ GameTag::OBFUSCATED,										"OBFUSCATED" },
		{ GameTag::BURNING,											"BURNING" },
		{ GameTag::OVERLOAD_LOCKED,									"OVERLOAD_LOCKED" },
		{ GameTag::NUM_TIMES_HERO_POWER_USED_THIS_GAME,				"NUM_TIMES_HERO_POWER_USED_THIS_GAME" },
		{ GameTag::CURRENT_HEROPOWER_DAMAGE_BONUS,					"CURRENT_HEROPOWER_DAMAGE_BONUS" },
		{ GameTag::HEROPOWER_DAMAGE,								"HEROPOWER_DAMAGE" },
		{ GameTag::LAST_CARD_PLAYED,								"LAST_CARD_PLAYED" },
		{ GameTag::NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_TURN,		"NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_TURN" },
		{ GameTag::NUM_CARDS_DRAWN_THIS_TURN,						"NUM_CARDS_DRAWN_THIS_TURN" },
		{ GameTag::AI_ONE_SHOT_KILL,								"AI_ONE_SHOT_KILL" },
		{ GameTag::EVIL_GLOW,										"EVIL_GLOW" },
		{ GameTag::HIDE_COST,										"HIDE_COST" },
		{ GameTag::HIDE_STATS,										"HIDE_STATS" },
		{ GameTag::INSPIRE,											"INSPIRE" },
		{ GameTag::RECEIVES_DOUBLE_SPELLDAMAGE_BONUS,				"RECEIVES_DOUBLE_SPELLDAMAGE_BONUS" },
		{ GameTag::HEROPOWER_ADDITIONAL_ACTIVATIONS,				"HEROPOWER_ADDITIONAL_ACTIVATIONS" },
		{ GameTag::HEROPOWER_ACTIVATIONS_THIS_TURN,					"HEROPOWER_ACTIVATIONS_THIS_TURN" },
		{ GameTag::REVEALED,										"REVEALED" },
		{ GameTag::NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_GAME,		"NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_GAME" },
		{ GameTag::CANNOT_ATTACK_HEROES,							"CANNOT_ATTACK_HEROES" },
		{ GameTag::LOCK_AND_LOAD,									"LOCK_AND_LOAD" },
		{ GameTag::DISCOVER,										"DISCOVER" },
		{ GameTag::TREASURE,										"TREASURE" },
		{ GameTag::SHADOWFORM,										"SHADOWFORM" },
		{ GameTag::NUM_FRIENDLY_MINIONS_THAT_ATTACKED_THIS_TURN,	"NUM_FRIENDLY_MINIONS_THAT_ATTACKED_THIS_TURN" },
		{ GameTag::NUM_RESOURCES_SPENT_THIS_GAME,					"NUM_RESOURCES_SPENT_THIS_GAME" },
		{ GameTag::CHOOSE_BOTH,										"CHOOSE_BOTH" },
		{ GameTag::ELECTRIC_CHARGE_LEVEL,							"ELECTRIC_CHARGE_LEVEL" },
		{ GameTag::HEAVILY_ARMORED,									"HEAVILY_ARMORED" },
		{ GameTag::DONT_SHOW_IMMUNE,								"DONT_SHOW_IMMUNE" },
		{ GameTag::RITUAL,											"RITUAL" },
		{ GameTag::PREHEALING,										"PREHEALING" },
		{ GameTag::APPEAR_FUNCTIONALLY_DEAD,						"APPEAR_FUNCTIONALLY_DEAD" },
		{ GameTag::OVERLOAD_THIS_GAME,								"OVERLOAD_THIS_GAME" },
		{ GameTag::SPELLS_COST_HEALTH,								"SPELLS_COST_HEALTH" },
		{ GameTag::HISTORY_PROXY_NO_BIG_CARD,						"HISTORY_PROXY_NO_BIG_CARD" },
		{ GameTag::PROXY_CTHUN,										"PROXY_CTHUN" },
		{ GameTag::TRANSFORMED_FROM_CARD,							"TRANSFORMED_FROM_CARD" },
		{ GameTag::CTHUN,											"CTHUN" },
		{ GameTag::CAST_RANDOM_SPELLS,								"CAST_RANDOM_SPELLS" },
		{ GameTag::SHIFTING,										"SHIFTING" },
		{ GameTag::JADE_GOLEM,										"JADE_GOLEM" },
		{ GameTag::EMBRACE_THE_SHADOW,								"EMBRACE_THE_SHADOW" },
		{ GameTag::CHOOSE_ONE,										"CHOOSE_ONE" },
		{ GameTag::EXTRA_ATTACKS_THIS_TURN,							"EXTRA_ATTACKS_THIS_TURN" },
		{ GameTag::SEEN_CTHUN,										"SEEN_CTHUN" },
		{ GameTag::MINION_TYPE_REFERENCE,							"MINION_TYPE_REFERENCE" },
		{ GameTag::UNTOUCHABLE,										"UNTOUCHABLE" },
		{ GameTag::RED_MANA_CRYSTALS,								"RED_MANA_CRYSTALS" },
		{ GameTag::SCORE_LABELID_1,									"SCORE_LABELID_1" },
		{ GameTag::SCORE_VALUE_1,									"SCORE_VALUE_1" },
		{ GameTag::SCORE_LABELID_2,									"SCORE_LABELID_2" },
		{ GameTag::SCORE_VALUE_2,									"SCORE_VALUE_2" },
		{ GameTag::SCORE_LABELID_3,									"SCORE_LABELID_3" },
		{ GameTag::SCORE_VALUE_3,									"SCORE_VALUE_3" },
		{ GameTag::CANT_BE_FATIGUED,								"CANT_BE_FATIGUED" },
		{ GameTag::AUTOATTACK,										"AUTOATTACK" },
		{ GameTag::ARMS_DEALING,									"ARMS_DEALING" },
		{ GameTag::PENDING_EVOLUTIONS,								"PENDING_EVOLUTIONS" },
		{ GameTag::QUEST,											"QUEST" },
		{ GameTag::TAG_LAST_KNOWN_COST_IN_HAND,						"TAG_LAST_KNOWN_COST_IN_HAND" },
		{ GameTag::DEFINING_ENCHANTMENT,							"DEFINING_ENCHANTMENT" },
		{ GameTag::FINISH_ATTACK_SPELL_ON_DAMAGE,					"FINISH_ATTACK_SPELL_ON_DAMAGE" },
		{ GameTag::KAZAKUS_POTION_POWER_1,							"KAZAKUS_POTION_POWER_1" },
		{ GameTag::MODULAR_ENTITY_PART_1,							"MODULAR_ENTITY_PART_1" },
		{ GameTag::MODULAR_ENTITY_PART_2,							"MODULAR_ENTITY_PART_2" },
		{ GameTag::KAZAKUS_POTION_POWER_2,							"KAZAKUS_POTION_POWER_2" },
		{ GameTag::MODIFY_DEFINITION_ATTACK,						"MODIFY_DEFINITION_ATTACK" },
		{ GameTag::MODIFY_DEFINITION_HEALTH,						"MODIFY_DEFINITION_HEALTH" },
		{ GameTag::MODIFY_DEFINITION_COST,							"MODIFY_DEFINITION_COST" },
		{ GameTag::MULTIPLE_CLASSES,								"MULTIPLE_CLASSES" },
		{ GameTag::ALL_TARGETS_RANDOM,								"ALL_TARGETS_RANDOM" },
		{ GameTag::MULTI_CLASS_GROUP,								"MULTI_CLASS_GROUP" },
		{ GameTag::CARD_COSTS_HEALTH,								"CARD_COSTS_HEALTH" },
		{ GameTag::GRIMY_GOONS,										"GRIMY_GOONS" },
		{ GameTag::JADE_LOTUS,										"JADE_LOTUS" },
		{ GameTag::KABAL,											"KABAL" },
		{ GameTag::ADDITIONAL_PLAY_REQS_1,							"ADDITIONAL_PLAY_REQS_1" },
		{ GameTag::ADDITIONAL_PLAY_REQS_2,							"ADDITIONAL_PLAY_REQS_2" },
		{ GameTag::ELEMENTAL_POWERED_UP,							"ELEMENTAL_POWERED_UP" },
		{ GameTag::QUEST_PROGRESS,									"QUEST_PROGRESS" },
		{ GameTag::QUEST_PROGRESS_TOTAL,							"QUEST_PROGRESS_TOTAL" },
		{ GameTag::QUEST_CONTRIBUTOR,								"QUEST_CONTRIBUTOR" },
		{ GameTag::ADAPT,											"ADAPT" },
		{ GameTag::IS_CURRENT_TURN_AN_EXTRA_TURN,					"IS_CURRENT_TURN_AN_EXTRA_TURN" },
		{ GameTag::EXTRA_TURNS_TAKEN_THIS_GAME,						"EXTRA_TURNS_TAKEN_THIS_GAME" },
		{ GameTag::SHIFTING_MINION,									"SHIFTING_MINION" },
		{ GameTag::SHIFTING_WEAPON,									"SHIFTING_WEAPON" },
		{ GameTag::DEATH_KNIGHT,									"DEATH_KNIGHT" },
		{ GameTag::BOSS,											"BOSS" },
		{ GameTag::STAMPEDE,										"STAMPEDE" },
		{ GameTag::IS_VAMPIRE,										"IS_VAMPIRE" },
		{ GameTag::CORRUPTED,										"CORRUPTED" },
		{ GameTag::LIFESTEAL,										"LIFESTEAL" },
		{ GameTag::OVERRIDE_EMOTE_0,								"OVERRIDE_EMOTE_0" },
		{ GameTag::OVERRIDE_EMOTE_1,								"OVERRIDE_EMOTE_1" },
		{ GameTag::OVERRIDE_EMOTE_2,								"OVERRIDE_EMOTE_2" },
		{ GameTag::OVERRIDE_EMOTE_3,								"OVERRIDE_EMOTE_3" },
		{ GameTag::OVERRIDE_EMOTE_4,								"OVERRIDE_EMOTE_4" },
		{ GameTag::OVERRIDE_EMOTE_5,								"OVERRIDE_EMOTE_5" },
		{ GameTag::SCORE_FOOTERID,									"SCORE_FOOTERID" },
		{ GameTag::HERO_POWER_DISABLED,								"HERO_POWER_DISABLED" },
		{ GameTag::VALEERASHADOW,									"VALEERASHADOW" },
		{ GameTag::OVERRIDECARDNAME,								"OVERRIDECARDNAME" },
		{ GameTag::OVERRIDECARDTEXTBUILDER,							"OVERRIDECARDTEXTBUILDER" },
		{ GameTag::HIDDEN_CHOICE,									"HIDDEN_CHOICE" },
		{ GameTag::ZOMBEAST,										"ZOMBEAST" },
	};

	const std::map<PlayReq, std::string> ConverterFromPlayReqToString =
	{
		{ PlayReq::INVALID,													"INVALID" },
		{ PlayReq::REQ_MINION_TARGET,										"REQ_MINION_TARGET" },
		{ PlayReq::REQ_FRIENDLY_TARGET,										"REQ_FRIENDLY_TARGET" },
		{ PlayReq::REQ_ENEMY_TARGET,										"REQ_ENEMY_TARGET" },
		{ PlayReq::REQ_DAMAGED_TARGET,										"REQ_DAMAGED_TARGET" },
		{ PlayReq::REQ_ENCHANTED_TARGET,									"REQ_ENCHANTED_TARGET" },
		{ PlayReq::REQ_MAX_SECRETS,											"REQ_MAX_SECRETS" },
		{ PlayReq::REQ_FROZEN_TARGET,										"REQ_FROZEN_TARGET" },
		{ PlayReq::REQ_CHARGE_TARGET,										"REQ_CHARGE_TARGET" },
		{ PlayReq::REQ_TARGET_MAX_ATTACK,									"REQ_TARGET_MAX_ATTACK" },
		{ PlayReq::REQ_NONSELF_TARGET,										"REQ_NONSELF_TARGET" },
		{ PlayReq::REQ_TARGET_WITH_RACE,									"REQ_TARGET_WITH_RACE" },
		{ PlayReq::REQ_TARGET_TO_PLAY,										"REQ_TARGET_TO_PLAY" },
		{ PlayReq::REQ_NUM_MINION_SLOTS,									"REQ_NUM_MINION_SLOTS" },
		{ PlayReq::REQ_WEAPON_EQUIPPED,										"REQ_WEAPON_EQUIPPED" },
		{ PlayReq::REQ_ENOUGH_MANA,											"REQ_ENOUGH_MANA" },
		{ PlayReq::REQ_YOUR_TURN,											"REQ_YOUR_TURN" },
		{ PlayReq::REQ_NONSTEALTH_ENEMY_TARGET,								"REQ_NONSTEALTH_ENEMY_TARGET" },
		{ PlayReq::REQ_HERO_TARGET,											"REQ_HERO_TARGET" },
		{ PlayReq::REQ_SECRET_CAP,											"REQ_SECRET_CAP" },
		{ PlayReq::REQ_SECRET_ZONE_CAP,										"REQ_SECRET_ZONE_CAP" },
		{ PlayReq::REQ_MINION_CAP_IF_TARGET_AVAILABLE,						"REQ_MINION_CAP_IF_TARGET_AVAILABLE" },
		{ PlayReq::REQ_MINION_CAP,											"REQ_MINION_CAP" },
		{ PlayReq::REQ_TARGET_ATTACKED_THIS_TURN,							"REQ_TARGET_ATTACKED_THIS_TURN" },
		{ PlayReq::REQ_TARGET_IF_AVAILABLE,									"REQ_TARGET_IF_AVAILABLE" },
		{ PlayReq::REQ_MINIMUM_ENEMY_MINIONS,								"REQ_MINIMUM_ENEMY_MINIONS" },
		{ PlayReq::REQ_TARGET_FOR_COMBO,									"REQ_TARGET_FOR_COMBO" },
		{ PlayReq::REQ_NOT_EXHAUSTED_ACTIVATE,								"REQ_NOT_EXHAUSTED_ACTIVATE" },
		{ PlayReq::REQ_UNIQUE_SECRET_OR_QUEST,								"REQ_UNIQUE_SECRET_OR_QUEST" },
		{ PlayReq::REQ_UNIQUE_SECRET,										"REQ_UNIQUE_SECRET" },
		{ PlayReq::REQ_TARGET_TAUNTER,										"REQ_TARGET_TAUNTER" },
		{ PlayReq::REQ_CAN_BE_ATTACKED,										"REQ_CAN_BE_ATTACKED" },
		{ PlayReq::REQ_ACTION_PWR_IS_MASTER_PWR,							"REQ_ACTION_PWR_IS_MASTER_PWR" },
		{ PlayReq::REQ_TARGET_MAGNET,										"REQ_TARGET_MAGNET" },
		{ PlayReq::REQ_ATTACK_GREATER_THAN_0,								"REQ_ATTACK_GREATER_THAN_0" },
		{ PlayReq::REQ_ATTACKER_NOT_FROZEN,									"REQ_ATTACKER_NOT_FROZEN" },
		{ PlayReq::REQ_HERO_OR_MINION_TARGET,								"REQ_HERO_OR_MINION_TARGET" },
		{ PlayReq::REQ_CAN_BE_TARGETED_BY_SPELLS,							"REQ_CAN_BE_TARGETED_BY_SPELLS" },
		{ PlayReq::REQ_SUBCARD_IS_PLAYABLE,									"REQ_SUBCARD_IS_PLAYABLE" },
		{ PlayReq::REQ_TARGET_FOR_NO_COMBO,									"REQ_TARGET_FOR_NO_COMBO" },
		{ PlayReq::REQ_NOT_MINION_JUST_PLAYED,								"REQ_NOT_MINION_JUST_PLAYED" },
		{ PlayReq::REQ_NOT_EXHAUSTED_HERO_POWER,							"REQ_NOT_EXHAUSTED_HERO_POWER" },
		{ PlayReq::REQ_CAN_BE_TARGETED_BY_OPPONENTS,						"REQ_CAN_BE_TARGETED_BY_OPPONENTS" },
		{ PlayReq::REQ_ATTACKER_CAN_ATTACK,									"REQ_ATTACKER_CAN_ATTACK" },
		{ PlayReq::REQ_TARGET_MIN_ATTACK,									"REQ_TARGET_MIN_ATTACK" },
		{ PlayReq::REQ_CAN_BE_TARGETED_BY_HERO_POWERS,						"REQ_CAN_BE_TARGETED_BY_HERO_POWERS" },
		{ PlayReq::REQ_ENEMY_TARGET_NOT_IMMUNE,								"REQ_ENEMY_TARGET_NOT_IMMUNE" },
		{ PlayReq::REQ_ENTIRE_ENTOURAGE_NOT_IN_PLAY,						"REQ_ENTIRE_ENTOURAGE_NOT_IN_PLAY" },
		{ PlayReq::REQ_MINIMUM_TOTAL_MINIONS,								"REQ_MINIMUM_TOTAL_MINIONS" },
		{ PlayReq::REQ_MUST_TARGET_TAUNTER,									"REQ_MUST_TARGET_TAUNTER" },
		{ PlayReq::REQ_UNDAMAGED_TARGET,									"REQ_UNDAMAGED_TARGET" },
		{ PlayReq::REQ_CAN_BE_TARGETED_BY_BATTLECRIES,						"REQ_CAN_BE_TARGETED_BY_BATTLECRIES" },
		{ PlayReq::REQ_STEADY_SHOT,											"REQ_STEADY_SHOT" },
		{ PlayReq::REQ_MINION_OR_ENEMY_HERO,								"REQ_MINION_OR_ENEMY_HERO" },
		{ PlayReq::REQ_TARGET_IF_AVAILABLE_AND_DRAGON_IN_HAND,				"REQ_TARGET_IF_AVAILABLE_AND_DRAGON_IN_HAND" },
		{ PlayReq::REQ_LEGENDARY_TARGET,									"REQ_LEGENDARY_TARGET" },
		{ PlayReq::REQ_FRIENDLY_MINION_DIED_THIS_TURN,						"REQ_FRIENDLY_MINION_DIED_THIS_TURN" },
		{ PlayReq::REQ_FRIENDLY_MINION_DIED_THIS_GAME,						"REQ_FRIENDLY_MINION_DIED_THIS_GAME" },
		{ PlayReq::REQ_ENEMY_WEAPON_EQUIPPED,								"REQ_ENEMY_WEAPON_EQUIPPED" },
		{ PlayReq::REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_MINIONS,	"REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_MINIONS" },
		{ PlayReq::REQ_TARGET_WITH_BATTLECRY,								"REQ_TARGET_WITH_BATTLECRY" },
		{ PlayReq::REQ_TARGET_WITH_DEATHRATTLE,								"REQ_TARGET_WITH_DEATHRATTLE" },
		{ PlayReq::REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_SECRETS,	"REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_SECRETS" },
		{ PlayReq::REQ_SECRET_CAP_FOR_NON_SECRET,							"REQ_SECRET_CAP_FOR_NON_SECRET" },
		{ PlayReq::REQ_SECRET_ZONE_CAP_FOR_NON_SECRET,						"REQ_SECRET_ZONE_CAP_FOR_NON_SECRET" },
		{ PlayReq::REQ_TARGET_EXACT_COST,									"REQ_TARGET_EXACT_COST" },
		{ PlayReq::REQ_STEALTHED_TARGET,									"REQ_STEALTHED_TARGET" },
		{ PlayReq::REQ_MINION_SLOT_OR_MANA_CRYSTAL_SLOT,					"REQ_MINION_SLOT_OR_MANA_CRYSTAL_SLOT" },
		{ PlayReq::REQ_MAX_QUESTS,											"REQ_MAX_QUESTS" },
		{ PlayReq::REQ_TARGET_IF_AVAILABE_AND_ELEMENTAL_PLAYED_LAST_TURN,	"REQ_TARGET_IF_AVAILABE_AND_ELEMENTAL_PLAYED_LAST_TURN" },
		{ PlayReq::REQ_TARGET_NOT_VAMPIRE,									"REQ_TARGET_NOT_VAMPIRE" },
		{ PlayReq::REQ_TARGET_NOT_DAMAGEABLE_ONLY_BY_WEAPONS,				"REQ_TARGET_NOT_DAMAGEABLE_ONLY_BY_WEAPONS" },
		{ PlayReq::REQ_NOT_DISABLED_HERO_POWER,								"REQ_NOT_DISABLED_HERO_POWER" },
		{ PlayReq::REQ_MUST_PLAY_OTHER_CARD_FIRST,							"REQ_MUST_PLAY_OTHER_CARD_FIRST" },
		{ PlayReq::REQ_HAND_NOT_FULL,										"REQ_HAND_NOT_FULL" },
		{ PlayReq::REQ_DRAG_TO_PLAY,										"REQ_DRAG_TO_PLAY" },
	};
}

#endif