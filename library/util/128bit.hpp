using i128 = __int128_t;
using u128 = __uint128_t;
istream& operator>>(istream& is, i128& x) {
    x = 0;
    string s;
    is >> s;
    for (const auto& c : s) {
        if (isdigit(c)) x = 10 * x + c - '0';
    }
    if (s.front() == '-') x *= -1;
    return is;
}
ostream& operator<<(ostream& os, const i128& x) {
    i128 y = x < 0 ? -x : x;
    deque<char> buffer;
    do {
        buffer.emplace_front("0123456789"[y % 10]);
        y /= 10;
    } while (y != 0);
    if (x < 0) buffer.emplace_front('-');
    for (const auto& c : buffer) os << c;
    return os;
}
istream& operator>>(istream& is, u128& x) {
    x = 0;
    string s;
    is >> s;
    for (const auto& c : s) {
        x = 10 * x + c - '0';
    }
    return is;
}
ostream& operator<<(ostream& os, u128& x) {
    deque<char> buffer;
    do {
        buffer.emplace_front("0123456789"[x % 10]);
        x /= 10;
    } while (x != 0);
    for (const auto& c : buffer) os << c;
    return os;
}