---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/yosupo/aplusb.test.cpp
    title: verify/yosupo/aplusb.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/yosupo/many_aplusb_128bit.test.cpp
    title: verify/yosupo/many_aplusb_128bit.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.12.6/x64/lib/python3.12/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.12.6/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.12.6/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ library/template/template.hpp: line 8: unable to process #include in #if / #ifdef\
    \ / #ifndef other than include guards\n"
  code: '#pragma once


    #include <bits/stdc++.h>

    using namespace std;

    using ll = long long;


    #ifdef LOCAL

    #include "debug_print.hpp"

    #define debug(...) debug_print::multi_print(#__VA_ARGS__, __VA_ARGS__)

    #else

    #define debug(...) (static_cast<void>(0))

    #endif'
  dependsOn: []
  isVerificationFile: false
  path: library/template/template.hpp
  requiredBy: []
  timestamp: '2024-09-24 03:22:17+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/yosupo/aplusb.test.cpp
  - verify/yosupo/many_aplusb_128bit.test.cpp
documentation_of: library/template/template.hpp
layout: document
redirect_from:
- /library/library/template/template.hpp
- /library/library/template/template.hpp.html
title: library/template/template.hpp
---
