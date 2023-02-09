#include <iostream>
using std::cin, std::cout, std::min, std::max;

int main() {
    // 반복 횟수 n 입력.
    int n;
    cin >> n;
    if (n < 1 || n > 1000000) exit(0);

    // 초기 최소, 최대 값 설정.
    int min_num = 1000000;
    int max_num = -1000000;
    
    for (int i = 0; i < n; i++) {
        // 숫자 num 입력.
        int num;
        cin >> num;
        if (num < -1000000 || num > 1000000) exit(0);

        // 최소, 최대 값 갱신.
        min_num = min(num, min_num);
        max_num = max(num, max_num);
    }

    // 출력.
    cout << min_num << ' ' << max_num;
}