#include <iostream>
#include <iomanip>
#include <numeric>
#include <vector>
using std::cin, std::cout, std::endl, std::setprecision, std::fixed;
using std::vector, std::accumulate;

int main() {
    // 테스트 케이스 개수 c 입력.
    short c;
    cin >> c;

    for (short i = 0; i < c; i++) {
        // 학생 수 n 입력.
        short n;
        cin >> n;
        if (n < 1 || n > 1000) exit(0);
        
        // 점수 입력.
        vector<double> score(n);
        for (short j = 0; j < n; j++) cin >> score[j];

        // 평균 달성 계산.
        double pass_count = 0;
        double average_score = accumulate(score.begin(), score.end(), 0) / n;
        for (short j = 0; j < n; j++) {
            if (score[j] > average_score) pass_count++;
        }

        // 출력.
        cout << setprecision(3) << fixed;
        cout << pass_count / n * 100 << '%';
        if (i < c - 1) cout << endl;
    }
}