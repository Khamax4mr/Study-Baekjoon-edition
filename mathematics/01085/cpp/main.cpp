#include <algorithm>
#include <iostream>
using std::cin, std::cout, std::min;

int main() {
    // 현재 위치 x, y, 직사각형 크기 w, h 입력.
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    if (x < 1 || x > w - 1) exit(0);
    if (y < 1 || y > h - 1) exit(0);
    if (w < 1 || w > 1000) exit(0);
    if (w < 1 || h > 1000) exit(0);

    // 출력.
    cout << min(min(x, w - x), min(y, h - y));
}