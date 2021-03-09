//
// Created by sylve on 2021-03-07.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, targetPrice;
    int coins[100];
    cin >> n >> targetPrice;

    for (int i = 0; i < n; ++i)
        cin >> coins[i];

    int answer = 0;
    // 그리디로 풀면 큰 금액부터  비교하며
    // 직접 빼주는게 베스트.
    // 근데 잘 생각해보면 큰 금액부터 나누기로 뺴주는게 더 빠르다.
    for (int i = n-1; i >= 0; --i) {
        answer += targetPrice / coins[i];
        targetPrice %= coins[i];
    }

    cout << answer << endl;

    return 0;
}
