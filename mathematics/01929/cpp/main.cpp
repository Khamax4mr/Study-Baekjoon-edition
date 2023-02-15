#include <cmath>
#include <iostream>
#include <vector>
using std::cin, std::cout, std::vector;

// 소수 여부를 판단하는 bool 배열 prime_map을 구성합니다.
void set_prime_map(vector<bool> *prime_map) {
    (*prime_map)[1] = false;
    for (int i = 2; i <= sqrt(1000000) + 1; i++) {
        if ((*prime_map)[i] == false) continue;
        for (int j = i*2; j <= 1000001; j += i) (*prime_map)[j] = false;
    }
}

int main() {
    // 속도 개선 환경 설정.
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    // 소수 여부 맵 구성.
    vector<bool> is_prime(1000001, true);
    set_prime_map(&is_prime);

    // 숫자 m, n 입력.
    int m, n;
    cin >> m >> n;
    if (m < 1 || m > 1000000) exit(0);
    if (n < 1 || n > 1000000) exit(0);

    // 출력.
    bool is_first_prime = true;
    for (int i = m; i <= n; i++) {
        if (!is_prime[i]) continue;

        if (!is_first_prime) cout << '\n';
        cout << i;
        is_first_prime = false;
    }
}