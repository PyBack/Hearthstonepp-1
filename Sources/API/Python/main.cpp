#include <pybind11/pybind11.h>

PYBIND11_MODULE(pyHearthstonepp, m)
{	
	m.doc() = 
    R"pbdoc(
			Hearthstone++
		)pbdoc";
}