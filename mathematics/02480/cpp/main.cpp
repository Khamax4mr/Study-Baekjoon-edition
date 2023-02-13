#include <iostream>
using std::cin, std::cout, std::max;

int main() {
    // 주사위 눈 a, b, c 입력.
    short a, b, c;
    cin >> a >> b >> c;
    if (a < 1 || a > 6) exit(0);
    if (b < 1 || b > 6) exit(0);
    if (c < 1 || c > 6) exit(0);

    // 일치 여부에 따라 출력.
    short match = (a == b) + (b == c) + (c == a);
    // a, b, c가 모두 같은 수인 경우.
    if (match == 3) cout << 10000 + a * 1000;
    // a, b, c가 모두 다른 수인 경우.
    else if (match == 0) cout << max(max(a, b), c) * 100;
    // b, c가 같은 경우.
    else if (b == c) cout << 1000 + b * 100;
    // a, b 또는 a, c가 같은 경우.
    else cout << 1000 + a * 100;
}