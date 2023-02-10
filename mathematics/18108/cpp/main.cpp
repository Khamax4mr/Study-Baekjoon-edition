#include <iostream>
using std::cin, std::cout;

int main() {
    // 불기 연도 y 입력.
    short y;
    cin >> y;
    if (y < 1000 || y > 3000) exit(0);

    // 출력.
    cout << (y - 543);
}