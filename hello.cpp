char const* greet()
{
   return "hello world boost with python and C++";
}


#include <boost/python.hpp>

BOOST_PYTHON_MODULE(hello)
{
    using namespace boost::python;
    def("greet", greet);
}