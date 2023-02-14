#include <iostream>
using std::cin, std::cout, std::endl;

int main() {
    // 테스트케이스 개수 t 입력.
    short t;
    cin >> t;
    if (t < 0) exit(0);

    for (short i = 0; i < t; i++) {
        // 호텔 층 수 h, 층 별 방 수 w, 손님 차례 n 입력.
        short h, w, n;
        cin >> h >> w >> n;
        if (h < 1 || h > 99) exit(0);
        if (w < 1 || w > 99) exit(0);
        if (n < 1 || n > h * w) exit(0);

        // 방 번호 계산.
        short room_id = 0;
        room_id += ((n % h == 0) ? h : n % h) * 100;
        room_id += ((n % h == 0) ? n / h : (n / h) + 1);

        // 출력.
        cout << room_id;
        if (i < t - 1) cout << endl;
    }
}