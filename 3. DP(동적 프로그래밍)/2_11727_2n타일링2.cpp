
// Created by sylve on 2021-01-04.
// 2×n 직사각형을 1×2, 2×1과 2×2 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.
// 그 경우의 수를 10007로 나눈 값 나머지를 출력하시오
#include <iostream>
using namespace std;

int n;
long long rect[1001];

int main() {
    cin >> n;
    rect[0] = 1;
    rect[1] = 1;
    for (int i = 2; i <= n; i++) {
        rect[i] = (rect[i - 1] + rect[i - 2]*2)%10007;
    }
    cout << rect[n] << '\n';
    return 0;
}
