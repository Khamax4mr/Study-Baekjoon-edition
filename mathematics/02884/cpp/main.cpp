#include <iostream>
using std::cin, std::cout;

int main() {
    // 현재 시간 h, m 입력.
    short h, m;
    cin >> h >> m;
    if (h < 0 || h > 23) exit(0);
    if (m < 0 || m > 59) exit(0);

    // 변환 시간 계산.
    h = (m < 45) ? ((h == 0) ? 23 : h - 1) : h;
    m = (m < 45) ? m + 15 : m - 45;

    // 출력.
    cout << h << ' ' << m;
}