#include <API/Python/Actions/Generic.hpp>
#include <hspp/Actions/Generic.hpp>
#include <hspp/Cards/Entity.hpp>

#include <pybind11/pybind11.h>

using namespace Hearthstonepp;
namespace py = pybind11;

void AddGeneric(py::module& m)
{
    py::class_<Generic>(m, "Generic")
        .def("draw_card", &Generic::DrawCardWrapper);
}