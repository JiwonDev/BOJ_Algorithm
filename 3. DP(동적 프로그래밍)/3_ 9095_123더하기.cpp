//
// Created by sylve on 2021-03-02.
//

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void solution(int n, vector<int> &input) {
    int dp[12] = {};
    dp[0] = -9999;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    /*
     * ����� ����(1,2,3)�� ���� ���� �����غ��� �ȴ�.
     *
     *
     * -4-
     * '1'+ 3 : 3�� �����(4��)
     * '2'+ 2 : 2�� �����(2��)
     * '3'+ 1 : 1�� �����(1��)
     *
     * -5-
     * '1'+ 4 : 4�� �����(7��)
     * '2'+ 3 : 3�� �����(4��)
     * '3'+ 2 : 2�� �����(2��)
     * '4'+ 1 : �̴� 1,2,3�� ���ԵǾ� �ִ� (4�� �ɰ����ϱ�)
     * -10-
     * '1' + 9 : 9�� �����
     * '2' + 8 : 8�� �����
     * '3' + 7 : 7�� �����
     * '4' + 6 : �̴� 1,2,3�� ���ԵǾ��ִ�. (4�� �ɰ����ϱ�)
     * '5' + 5 : �̰͵� 1,2,3�� ���ԵǾ��ִ� (5�� �ɰ����ϱ�)
     */
    int max = *max_element(input.begin(), input.end());

    for (int i = 4; i <= max; ++i)
        dp[i] = dp[i-3] + dp[i-2] + dp[i-1];

    for(auto num:input)
        cout << dp[num] << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    vector<int> input;

    int temp;
    for (int i = 0; i < t; ++i) {
        cin >> temp;
        input.push_back(temp);
    }
    solution(t, input);

    return 0;
}