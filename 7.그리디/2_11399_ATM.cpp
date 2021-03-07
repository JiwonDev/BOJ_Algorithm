#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int cost[1000]; // 인출하는데 걸리는 시간
    int n; // 사람 수

    cin >> n;
    for (int i = 0; i < n; i++) cin >> cost[i];
    sort(cost, cost + n); //cost[0]~cost[n] 정렬

    // 정렬한걸 하나하나 더하면 끝.
    // 마지막 사람 = p[0]~p[n]
    // 그다음 사람 = p[0]~p[n-1] ...

    long long answer = 0;

    for (int i = n; i > 0; --i)
        for (int j = 0; j < i; ++j)
            answer += cost[j];

    cout << answer << endl;
}