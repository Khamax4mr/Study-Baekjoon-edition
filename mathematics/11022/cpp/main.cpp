#include <iostream>
using std::cin, std::cout, std::endl;

int main() {
    // 반복 횟수 n 입력.
    short n;
    cin >> n;

    for (short i = 1; i <= n; i++) {
        // 숫자 a, b 입력.
        short a, b;
        cin >> a >> b;
        if (a <= 0 || a >= 10) exit(0);
        if (b <= 0 || b >= 10) exit(0);

        // 출력.
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b;
        if (i < n) cout << endl;
    }
}