#include <iostream>
using std::cin, std::cout;

int main() {
    // 숫자 a, b 입력.
    short a, b;
    cin >> a >> b;
    if (a <= 0 || a >= 10) exit(0);
    if (b <= 0 || b >= 10) exit(0);

    // 출력.
    cout << a - b;
}