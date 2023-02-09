#include <iostream>
using std::cin, std::cout;

int main() {
    // 베이스 숫자 n 입력.
    short n;
    cin >> n;
    if (n < 0 || n > 99) exit(0);

    // 합 사이클 계산.
    short cycle = 0;
    short new_n = n;
    do {
        short sum = (new_n / 10) + (new_n % 10);
        new_n = (new_n % 10) * 10 + (sum % 10);
        cycle++;
    } while (new_n != n);

    // 출력.
    cout << cycle;
}