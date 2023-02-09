#include <iostream>
using std::cin, std::cout, std::endl;

int main() {
    // 숫자 a, b 입력.
    short a, b;
    cin >> a >> b;
    if (a < 100 || a >= 1000) exit(0);
    if (b < 100 || b >= 1000) exit(0);

    int result = 0;
    for (short pos = 1; pos <= b; pos *= 10) {
        // 부분 계산 결과 계산.
        short remainer = (b % (pos * 10));
        int part_result = a * remainer;
        cout << part_result / pos << endl;

        // 부분 계산 결과 반영.
        b -= remainer;
        result += part_result;
    }
    
    // 최종 계산 결과 출력.
    cout << result;
}