#include <iostream>
#include <vector>
using std::cin, std::cout, std::endl, std::vector;

int main() {
    // 숫자 a, b, c 입력.
    short a, b, c;
    cin >> a >> b >> c;
    if (a < 100 || a >= 1000) exit(0);
    if (b < 100 || b >= 1000) exit(0);
    if (c < 100 || c >= 1000) exit(0);

    // 숫자 개수 계산.
    vector<short> num_count(10);
    for (int result = a * b * c; result > 0; result /= 10) num_count[result % 10]++;

    // 출력.
    for (short i = 0; i < 10; i++) {
        cout << num_count[i];
        if (i < 9) cout << endl;
    }
}