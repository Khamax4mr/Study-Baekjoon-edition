#include <iostream>
#include <numeric>
#include <vector>
using std::cin, std::cout, std::vector, std::accumulate;

int main() {
    // 나머지 발생 확인용.
    vector<bool> remain_exist(42);
    for (short i = 0; i < 10; i++) {
        // 숫자 n 입력.
        short n;
        cin >> n;
        if (n < 0 || n > 1000) exit(0);
        
        // 나머지 발생 반영.
        remain_exist[n % 42] = true;
    }

    // 출력.
    cout << accumulate(remain_exist.begin(), remain_exist.end(), 0);
}