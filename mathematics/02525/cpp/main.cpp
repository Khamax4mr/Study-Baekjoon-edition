#include <iostream>
using std::cin, std::cout;

int main() {
    // 시간, 분, 요리 시간(분) a, b, c 입력.
    short a, b, c;
    cin >> a >> b >> c;
    if (a < 0 || a >= 24) exit(0);
    if (b < 0 || b >= 60) exit(0);
    if (c < 0 || c > 1000) exit(0);

    // 요리 시간을 시, 분으로 구분.
    short cooking_h = c / 60;
    short cooking_m = c % 60;
    
    // 요리 시간 계산.
    bool carry = (cooking_m + b >= 60);
    cooking_m = (cooking_m + b) % 60;
    cooking_h = (a + cooking_h + carry) % 24;

    // 출력.
    cout << cooking_h << ' ' << cooking_m; 
}