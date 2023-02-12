#include <iostream>
#include <vector>
using std::cin, std::cout, std::vector;

// 소수 여부를 판단하는 bool 배열 prime_map을 구성합니다.
void set_prime_map(vector<bool> *prime_map) {
    (*prime_map)[1] = false;
    for (short i = 2; i <= 1000; i++) {
        if ((*prime_map)[i] == false) continue;
        for (short j = i*2; j <= 1000; j += i) (*prime_map)[j] = false;
    }
}

int main() {
    // 소수 여부 맵 구성.
    vector<bool> is_prime(1001, true);
    set_prime_map(&is_prime);

    short n;
    cin >> n;
    if (n > 100) exit(0);

    short prime_count = 0;
    for (short i = 0; i < n; i++) {
        // 숫자 num 입력.
        short num;
        cin >> num;
        if (num <= 0 || num > 1000) exit(0);
        if (is_prime[num] == true) prime_count++;
    }

    // 출력.
    cout << prime_count;
}