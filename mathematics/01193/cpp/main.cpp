#include <iostream>
using std::cin, std::cout;

int main() {
    // x번째 입력.
    int x;
    cin >> x;
    if (x < 1 || x > 10000000) exit(0);

    // x번째에서 도달할 수 있는 위치 계산.
    int max_rank = 0;
    short id = 1;
    for (id; max_rank < x; id++) max_rank += id;

    // 지그재그 위치에 따라 출력.
    if (id % 2 == 0) cout << max_rank - x + 1 << '/' << id - max_rank + x - 1;
    else cout << id - max_rank + x - 1 << '/' << max_rank - x + 1;
}