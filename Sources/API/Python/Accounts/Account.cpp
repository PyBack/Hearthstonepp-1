#include <API/Python/Accounts/Account.hpp>
#include <hspp/Accounts/Account.hpp>
#include <hspp/Cards/Deck.hpp>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

using namespace Hearthstonepp;
namespace py = pybind11;

void AddAccount(py::module &m)
{
    py::class_<Account>(m, "Account")
        .def(py::init<>())
        .def(py::init<std::string &&, std::string && >())
        .def(py::init<std::string &&, std::string &&,
		    std::vector<Deck*>>())
        .def_property_readonly("email", &Account::GetEmail)
        .def_property_readonly("nickname", &Account::GetNickname)
        .def_property_readonly("num_of_deck", &Account::GetNumOfDeck)
        .def("get_deck", &Account::GetDeck, py::arg("idx"))
        .def("show_deck_list", &Account::ShowDeckList)
        .def("create_deck", &Account::CreateDeck,
			py::arg("name"), py::arg("deck_class"))
        .def("delete_deck", &Account::DeleteDeck,
			py::arg("idx"));
}