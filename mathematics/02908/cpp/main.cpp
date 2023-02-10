#include <iostream>
using std::cin, std::cout;

// 주어진 숫자 n의 각 자리 수를 뒤집습니다.
short reverse_number(short n) {
    short reversed_n = 0;
    for (n; n > 0; n /= 10) {
        reversed_n *= 10;
        reversed_n += (n % 10);
    }
    return reversed_n;
}

int main() {
    // 숫자 a, b 입력.
    short a, b;
    cin >> a >> b;
    if (a < 100 || a >= 1000) exit(0);
    if (b < 100 || b >= 1000) exit(0);

    // 숫자 뒤집기.
    short reversed_a = reverse_number(a);
    short reversed_b = reverse_number(b);

    // 출력.
    cout << ((reversed_a > reversed_b) ? reversed_a : reversed_b);
}