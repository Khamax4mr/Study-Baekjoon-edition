#include <iostream>
using std::cin, std::cout;

int main() {
    // 숫자 개수 n 입력.
    short n;
    cin >> n;
    if (n < 1 || n > 100) exit(0);

    short sum = 0;
    for (short i = 0; i < n; i++) {
        // 숫자를 문자열로 num_ascii 읽기.
        char num_ascii;
        cin >> num_ascii;
        sum += (num_ascii - '0');
    }

    // 출력.
    cout << sum;
}