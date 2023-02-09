#include <iostream>
using namespace std;

int main() {
    // 반복 횟수 n 입력.
    short n, a, b;
    cin >> n;
    
    for (short i = 0; i < n; i++) {
        // 숫자 a, b 입력.
        cin >> a >> b;
        if (a <= 0 || a >= 10) exit(0);
        if (b <= 0 || b >= 10) exit(0);

        // 출력.
        cout << a + b;
        if (i < n - 1) cout << endl;
    }
}