#include <iostream>
using std::cin, std::cout, std::endl;

int main() {
    // 줄바꿈 출력용.
    bool is_initial = true;

    while(true) {
        // 숫자 a, b 입력.
        short a, b;
        cin >> a >> b;
        if (a <= 0 || a >= 10) exit(0);
        if (b <= 0 || b >= 10) exit(0);

        // a, b 둘 다 0이면 중단.
        if ((a == 0) && (b == 0)) break;

        // 출력.
        if (!is_initial) cout << endl;
        else is_initial = false;
        cout << a + b;
    }
}