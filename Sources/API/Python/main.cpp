#include <API/Python/Accounts/Account.hpp>
#include <API/Python/Accounts/Player.hpp>

#include <pybind11/pybind11.h>

PYBIND11_MODULE(pyHearthstonepp, m)
{
    m.doc() =
        R"pbdoc(
			Hearthstone++
		)pbdoc";

    AddAccount(m);
    AddPlayer(m);
}