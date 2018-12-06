#include <API/Python/Accounts/Player.hpp>
#include <hspp/Accounts/Player.hpp>
#include <hspp/Managers/GameAgent.hpp>

#include <pybind11/operators.h>
#include <pybind11/pybind11.h>

using namespace Hearthstonepp;
namespace py = pybind11;

void AddPlayer(py::module& m)
{
    py::class_<Player>(m, "Player")
        .def(py::init<>())
        //.def(py::init<const Player&>())
        //.def(py::init<Player&&>())
        .def_property("nickname", &Player::GetNickname, &Player::SetNickname)
        .def_property("id", &Player::GetID, &Player::SetID)
        .def_property_readonly("hero", &Player::GetHero)
        .def_property("deck", &Player::GetDeck, &Player::SetDeck)
        .def_property_readonly("field", &Player::GetField)
        .def_property_readonly("hand", &Player::GetHand)
		.def_property("available_mana", &Player::GetAvailableMana, &Player::SetAvailableMana)
		.def_property("maximum_mana", &Player::GetMaximumMana, &Player::SetMaximumMana)
		.def_property("num_card_after_exhaust", &Player::GetNumCardAfterExhaust, &Player::SetNumCardAfterExhaust)
		.def_property("game_agent", &Player::GetGameAgent, &Player::SetGameAgent)
		.def_property("opponent", &Player::GetOpponent, &Player::SetOpponent)
		.def("add_hero_and_power", &Player::AddHeroAndPowerWrapper,
			py::arg("hero_card"), py::arg("power_card"));
}
