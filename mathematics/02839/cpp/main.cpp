#include <iostream>
using std::cin, std::cout;

int main() {
    // 무게 n 입력.
    short n;
    cin >> n;
    if (n < 3 || n > 5000) exit(0);

    // 탐욕 알고리즘. 최상의 조건부터 역으로 탐색.
    short bag = 0;
    bool is_able_deliver = false;
    while (n >= 0) {
        // 5로 나눌 수 있으면 5kg 포장으로 마무리.
        if (n % 5 == 0) {
            bag += (n / 5);
            is_able_deliver = true;
            break;
        }
        // 5로 나눌 수 없으면 3kg 포장 하나 추가.
        else {
            n -= 3;
            bag += 1;
        }
    }
    
    if (is_able_deliver) cout << bag;
    else cout << -1;
}