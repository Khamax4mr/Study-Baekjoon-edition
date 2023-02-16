#include <iostream>
using std::cin, std::cout;

// 적정 체스 말 개수 정의.
#define N_KING 1
#define N_QUEEN 1
#define N_ROOK 2
#define N_BISHOP 2
#define N_KNIGHT 2
#define N_PAWN 8

int main() {
    // 킹 n_king, 퀸 n_queen, 룩 n_rook, 비숍 n_bishop, 나이트 n_knight, 폰 n_pawn 개수 입력.
    short n_king, n_queen, n_rook, n_bishop, n_knight, n_pawn;
    cin >> n_king >> n_queen >> n_rook >> n_bishop >> n_knight >> n_pawn;
    if (n_king < 0 || n_king > 10) exit(0);
    if (n_queen < 0 || n_queen > 10) exit(0);
    if (n_rook < 0 || n_rook > 10) exit(0);
    if (n_bishop < 0 || n_bishop > 10) exit(0);
    if (n_knight < 0 || n_knight > 10) exit(0);
    if (n_pawn < 0 || n_pawn > 10) exit(0);

    // 출력.
    cout << N_KING - n_king << ' ' << N_QUEEN - n_queen << ' ' << N_ROOK - n_rook << ' ' <<
        N_BISHOP - n_bishop << ' ' << N_KNIGHT - n_knight << ' ' << N_PAWN - n_pawn;
}