#include <cmath>
#include <iostream>
#include <vector>
using std::cin, std::cout, std::vector, std::endl;

// 소수 여부를 판단하는 bool 배열 prime_map을 구성합니다.
void set_prime_map(vector<bool> *prime_map) {
    (*prime_map)[1] = false;
    for (int i = 2; i <= sqrt(10000) + 1; i++) {
        if ((*prime_map)[i] == false) continue;
        for (int j = i*2; j <= 10001; j += i) (*prime_map)[j] = false;
    }
}

int main() {
    // 숫자 m, n 입력.
    short m, n;
    cin >> m >> n;
    if (m < 1 || m > 10000) exit(0);
    if (n < 1 || n > 10000) exit(0);
    if (m > n) exit(0);

    // 소수 맵 구성.
    vector<bool> prime_map(10001);
    for (short i = 1; i <= 10000; i++) prime_map[i] = true;
    set_prime_map(&prime_map);

    // 소수 합계, 최소 소수 계산.
    int sum = 0;
    short min_prime = 0;
    for (short i = m; i <= n; i++) {
        if (prime_map[i] == true) {
            if (sum == 0) min_prime = i;
            sum += i;
        }
    }

    // 출력.
    if (sum == 0) cout << -1;
    else cout << sum << endl << min_prime;
}