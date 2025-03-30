#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>
#include <sstream>
#include <string>
#include <cassert>
using namespace std;

struct Tuning
{
    static const bool verbose;
};

void vis(const char *message = nullptr); // visualizzare

template <class T>
bool asseq(T a, T b, const char *mess = nullptr, bool crash = true);
template <class T>
bool asneq(T a, T b, const char *mess = nullptr, bool crash = true);

#ifdef NO_EXPLICIT
#include "debug.tpp"
#endif

#endif // DEBUG_H