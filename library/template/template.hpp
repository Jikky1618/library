#pragma once

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#include "debug_print.hpp"
#define debug(...) debug_print::multi_print(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) (static_cast<void>(0))
#endif