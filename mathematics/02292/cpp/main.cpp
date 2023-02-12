#include <iostream>
using std::cin, std::cout;

int main() {
    // 숫자 n 입력.
    int n;
    cin >> n;
    if (n < 1 || n > 1000000000) exit(0);

    // 벌집 거리 별 최대 번호 계산.
    int fibo_id = 0;
    int max_room_id = 0;
    for (int i = 0; max_room_id < n; i++) {
        fibo_id += i;
        max_room_id = fibo_id * 6 + 1;
        
        // 출력.
        if (n <= max_room_id) {
            cout << i + 1;
            break;
        }
    }
}