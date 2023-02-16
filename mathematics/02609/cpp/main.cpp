#include <algorithm>
#include <iostream>
using std::cin, std::cout, std::endl, std::swap;

// 숫자 a, b의 최대공약수를 유클리드 호제법으로 찾습니다.
int get_gcd(int a, int b) {
    while (a % b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return b;
}

// 숫자 a, b의 최소공배수를 찾습니다.
int get_lcm(int a, int b, int gcd) {
    return a * b / gcd;
}

int main() {
    // 숫자 a, b 입력.
    int a, b;
    cin >> a >> b;
    if (a < 1 || a > 10000) exit(0);
    if (b < 1 || b > 10000) exit(0);
    if (b > a) swap(a, b);

    // 최대공약수, 최소공배수 계산.
    int gcd = get_gcd(a, b);
    int lcm = get_lcm(a, b, gcd);

    // 출력.
    cout << gcd << endl << lcm;
}