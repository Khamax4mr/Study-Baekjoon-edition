#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using std::cin, std::cout, std::vector, std::max_element, std::accumulate;

int main() {
    // 과목 개수 n 입력.
    short n;
    cin >> n;
    if (n > 1000) exit(0);

    // 점수 score 입력.
    vector<double> score(n);
    for (short i = 0; i < n; i++) {
        cin >> score[i];
        if (score[i] < 0 || score[i] > 100) exit(0);
    }

    // 점수 합계 계산.
    double max_score = *max_element(score.begin(), score.end());
    double sum = accumulate(score.begin(), score.end(), 0) / max_score * 100;

    // 출력.
    cout.precision(16);
    cout << sum / n;
}