#include <iostream>
using std::cin, std::cout;

int main() {
    // 숫자 n 입력.
    short n;
    cin >> n;
    if (n < 0 || n > 12) exit(0);

    // 팩토리얼 계산.
    int result = 1;
    for (short i = 1; i <= n; i++) result *= i;

    // 출력.
    cout << result;
}