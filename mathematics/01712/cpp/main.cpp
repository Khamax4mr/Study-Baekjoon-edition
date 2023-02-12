#include <iostream>
using std::cin, std::cout;

int main() {
    // 고정 비용 a, 가변 비용 b, 가격 c 입력.
    int a, b, c;
    cin >> a >> b >> c;

    // a + b * n < c * n을 만족하는 n 출력.
    if (c - b <= 0) cout << -1;
    else cout << (a / (c - b) + 1);
}