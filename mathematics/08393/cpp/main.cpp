#include <iostream>
using std::cin, std::cout;

int main() {
    // 최대 숫자 n 입력.
    short n;
    cin >> n;
    if (n < 1 || n > 10000) exit(0);

    // 합계 계산.
    int sum = 0;
    for (short i = 1; i <= n; i++) sum += i;

    // 출력.
    cout << sum;
}