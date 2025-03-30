#include "debug.h"
#ifndef NO_EXPLICIT
#include "debug.tpp"
#endif

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

constexpr bool Tuning::verbose = false;

void vis(const char *message)
{
    if (!message)
        message = "vis()";
    throw std::runtime_error(message);
}

#ifndef NO_EXPLICIT
//Explicit instantiations for common types.
// Add more here if the make command
//without -DCAREFULTPP=1 caused linker errors.
template bool asseq<int>(int, int, const char*, bool);
template bool asseq<double>(double, double, const char*, bool);
template bool asseq<float>(float, float, const char*, bool);
template bool asseq<string>(string, string, const char*, bool);

template bool asneq<int>(int, int, const char*, bool);
template bool asneq<double>(double, double, const char*, bool);
template bool asneq<float>(float, float, const char*, bool);
template bool asneq<string>(string, string, const char*, bool);
#endif
