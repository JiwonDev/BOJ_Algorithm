//
// Created by sylve on 2021-02-20.
//
#include <iostream>
using namespace std;

int coins[101] = {0,};
int caseCount[10001] = {0,};

int main()
{
    int n, k;
    int remain;
    cin >> n >> k;

    for(int i = 0; i < n; i++)
        cin >> coins[i];

    caseCount[0] = 1;

    for(int num = 0; num < n; num++) // n = 동전 갯수
        for(int i = 1; i <= k; i++){ // k = 현재 합계
            remain = i - coins[num];
            if(remain >= 0) caseCount[i] += caseCount[remain];
        }
    cout << caseCount[k];

    return 0;
}
