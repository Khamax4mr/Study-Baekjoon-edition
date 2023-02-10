#include <iostream>
#include <vector>
using std::cout, std::endl, std::vector;

// n의 각 자리수의 합계를 구합니다.
short d(short n) {
    short sum = n;
    for (n; n > 0; n /= 10) sum += n % 10;
    return sum;
}

int main() {
    vector<bool> is_able_create(10000+1);
    bool is_initial = true;

    for (short i = 1; i <= 10000; i++) {
        // 합성할 수 있으면 제외.
        if (is_able_create[i]) continue;
        // 셀프 넘버 출력.
        else {
            if (!is_initial) cout << endl;
            else is_initial = false;
            cout << i;
        }

        // 숫자 합성.
        for (short j = i; j <= 10000; j = d(j)) is_able_create[j] = true;
    }
}