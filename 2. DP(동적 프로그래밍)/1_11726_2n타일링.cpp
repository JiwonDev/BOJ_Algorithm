//
// Created by sylve on 2021-01-03.
//2��n ũ���� ���簢���� 1��2, 2��1 Ÿ�Ϸ� ä��� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//* ����� ���� %10007�� ���� �������� ����Ͻÿ�.

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