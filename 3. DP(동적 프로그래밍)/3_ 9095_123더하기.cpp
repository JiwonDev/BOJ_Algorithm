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
     * 경우의 수를(1,2,3)을 각각 빼서 생각해보면 된다.
     *
     *
     * -4-
     * '1'+ 3 : 3의 방법수(4개)
     * '2'+ 2 : 2의 방법수(2개)
     * '3'+ 1 : 1의 방법수(1개)
     *
     * -5-
     * '1'+ 4 : 4의 방법수(7개)
     * '2'+ 3 : 3의 방법수(4개)
     * '3'+ 2 : 2의 방법수(2개)
     * '4'+ 1 : 이는 1,2,3에 포함되어 있다 (4가 쪼개지니까)
     * -10-
     * '1' + 9 : 9의 방법수
     * '2' + 8 : 8의 방법수
     * '3' + 7 : 7의 방법수
     * '4' + 6 : 이는 1,2,3에 포함되어있다. (4가 쪼개지니까)
     * '5' + 5 : 이것도 1,2,3에 포함되어있다 (5가 쪼개지니까)
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