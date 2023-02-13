#include <iostream>
#include <vector>
using std::cin, std::cout, std::vector;

// fibo에 피보나치 수열을 구성합니다.
void set_fibonacci(vector<short> *fibo) {
    (*fibo)[1] = 1;
    for (short i = 2; i <= 20; i++) (*fibo)[i] = (*fibo)[i-1] + (*fibo)[i-2];
}

int main() {
    // n번째 입력.
    short n;
    cin >> n;
    if (n < 0 || n > 20) exit(0);

    // 피보나치 수열 구성.
    vector<short> fibo(21);
    set_fibonacci(&fibo);
    cout << fibo[n];
}