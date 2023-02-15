#include <iostream>
#include <vector>
using std::cin, std::cout, std::endl, std::vector;

int main() {
    // 테스트케이스 개수 t 입력.
    short t;
    cin >> t;
    if (t < 1) exit(0);

    for (short test_id = 0; test_id < t; test_id++) {
        // k층, n호 입력.
        short k, n;
        cin >> k >> n;
        if (k < 1 || k > 14) exit(0);
        if (n < 1 || n > 14) exit(0);

        // 0층 인원 설정.
        vector<int> population(n);
        for (short i = 0; i < n; i++) population[i] = i + 1;

        // 한 층씩 올라가면서 인원 설정.
        for (short floor = 1; floor <= k; floor++) {
            for (short i = 1; i < n; i++) population[i] += population[i-1];
        }

        // 출력.
        cout << population[n - 1];
        if (test_id < t - 1) cout << endl;
    }
}