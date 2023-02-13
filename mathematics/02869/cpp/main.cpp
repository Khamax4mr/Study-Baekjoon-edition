#include <iostream>
#include <cmath>
using std::cin, std::cout;

int main() {
    // 올라가는 거리 a, 미끄러지는 거리 b, 높이 v 입력.
    double a, b, v;
    cin >> a >> b >> v;
    if (a < 1 || a > 1000000000) exit(0);
    if (b < 1 || b > 1000000000) exit(0);
    if (v < 1 || v > 1000000000) exit(0);

    // (a * day) - (b * (day - 1)) > v인 day 구하기.
    int day = ceil((v - b) / (a - b));
    cout << day;
}