#include <iostream>
using std::cin, std::cout, std::endl;

int main() {
    // 숫자 a, b 입력.
    short a, b;
    cin >> a >> b;
    if (a < 1 || a > 10000) exit(0);
    if (b < 1 || b > 10000) exit(0);

    // 출력.
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b;
}