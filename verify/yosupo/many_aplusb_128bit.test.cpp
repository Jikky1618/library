#define PROBLEM "https://judge.yosupo.jp/problem/many_aplusb_128bit"

#include "../../library/template/template.hpp"
#include "../../library/util/128bit.hpp"

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);
    int t;
    cin >> t;
    while (t--) {
        i128 A, B;
        cin >> A >> B;
        cout << A + B << '\n';
    }
}