#include <iostream>
using std::cin, std::cout, std::endl;

int main() {
    // 숫자 a, b, c 입력.
    short a, b, c;
    cin >> a >> b >> c;
    if (a < 2 || a > 10000) exit(0);
    if (b < 2 || b > 10000) exit(0);
    if (c < 2 || c > 10000) exit(0);

    // 출력.
    cout << (a + b) % c << endl;
    cout << ((a % c) + (b % c)) % c << endl;
    cout << (a * b) % c << endl;
    cout << ((a % c) * (b % c)) % c;
}