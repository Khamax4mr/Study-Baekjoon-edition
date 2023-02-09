#include <iostream>
using std::cin, std::cout;

int main() {
    // 속도 개선 환경 설정.
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    // 반복 횟수 n 입력.
    int n;
    cin >> n;
    if (n < 0 || n > 1000000) exit(0);

    for (int i = 0; i < n; i++) {
        // 숫자 a, b 입력.
        short a, b;
        cin >> a >> b;
        if (a < 1 || a > 1000) exit(0);
        if (b < 1 || b > 1000) exit(0);

        // 출력.
        cout << a + b;
        if (i < n - 1) cout << '\n';
    }
}