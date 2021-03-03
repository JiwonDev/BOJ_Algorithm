//
// Created by sylve on 2021-03-03.
//1065 한수

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, cnt;
    int n100, n10, n1;
    cin >> n;

    if (n < 100) // 자리가 2자리면 무조건 성립
        cout << n;
    else
    {
        cnt = 99; // 2자리수 99개 + 3자리수
        for (int i = 100; i <= n; i++)
        {
            n100 = i / 100;        // 100의 자리
            n10 = (i / 10) % 10;    // 10의 자리
            n1 = i % 10;            // 1의 자리

            if ((n100 - n10) == (n10 - n1))
                cnt++;
        }
        cout << cnt;
    }
    return 0;
}