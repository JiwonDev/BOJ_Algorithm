//
// Created by sylve on 2021-01-03.
//2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.
//* 방법의 수를 %10007로 나눈 나머지를 출력하시오.

#include <iostream>
using namespace std;

int main() {
    int n,dp[1001];
    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++) {
        // f(n) = f(n-1) + f(n-2)
        dp[i] = (dp[i - 1] + dp[i - 2])%10007;
    }
    cout << dp[n] << '\n';
    return 0;
}