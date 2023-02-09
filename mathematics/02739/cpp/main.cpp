#include <iostream>
using std::cin, std::cout, std::endl;

int main() {
    // n단 입력.
    short n;
    cin >> n;
    if (n < 1 || n > 9) exit(0);

    // 출력.
    for (int i = 1; i <= 9; i++) {
        cout << n << " * " << i << " = " << n * i;
        if (i < 9) cout << endl;
    }
}