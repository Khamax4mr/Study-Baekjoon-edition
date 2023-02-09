#include <iostream>
using std::cin, std::cout;

int main() {
    // 연도 입력.
    short year;
    cin >> year;
    if (year < 1 || year > 4000) exit(0);

    // 윤년 계산.
    bool isLeap = ((year % 400 == 0) ? true : ((year % 100 == 0) ? false : (year % 4 == 0)));

    // 출력.
    cout << isLeap;
}