//
// Created by sylve on 2021-01-04.
// 2��n ���簢���� 1��2, 2��1�� 2��2 Ÿ�Ϸ� ä��� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// �� ����� ���� 10007�� ���� �� �������� ����Ͻÿ�
#include <iostream>
using namespace std;

int n;
long long dp[1001];

int main() {
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]*2)%10007;
    }
    cout << dp[n] << '\n';
    return 0;
}
