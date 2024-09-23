---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: library/template/template.hpp
    title: library/template/template.hpp
  - icon: ':heavy_check_mark:'
    path: library/util/128bit.hpp
    title: library/util/128bit.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/many_aplusb_128bit
    links:
    - https://judge.yosupo.jp/problem/many_aplusb_128bit
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.12.6/x64/lib/python3.12/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.12.6/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.12.6/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.12.6/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ library/template/template.hpp: line 8: unable to process #include in #if / #ifdef\
    \ / #ifndef other than include guards\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/many_aplusb_128bit\"\n\n\
    #include \"../../library/template/template.hpp\"\n#include \"../../library/util/128bit.hpp\"\
    \n\nint main() {\n    cin.tie(nullptr);\n    ios::sync_with_stdio(false);\n  \
    \  cout << fixed << setprecision(20);\n    int t;\n    cin >> t;\n    while (t--)\
    \ {\n        i128 A, B;\n        cin >> A >> B;\n        cout << A + B << '\\\
    n';\n    }\n}"
  dependsOn:
  - library/template/template.hpp
  - library/util/128bit.hpp
  isVerificationFile: true
  path: verify/yosupo/many_aplusb_128bit.test.cpp
  requiredBy: []
  timestamp: '2024-09-24 03:23:06+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/yosupo/many_aplusb_128bit.test.cpp
layout: document
redirect_from:
- /verify/verify/yosupo/many_aplusb_128bit.test.cpp
- /verify/verify/yosupo/many_aplusb_128bit.test.cpp.html
title: verify/yosupo/many_aplusb_128bit.test.cpp
---
