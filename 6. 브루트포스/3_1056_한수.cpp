//
// Created by sylve on 2021-03-03.
//1065 �Ѽ�

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

    if (n < 100) // �ڸ��� 2�ڸ��� ������ ����
        cout << n;
    else
    {
        cnt = 99; // 2�ڸ��� 99�� + 3�ڸ���
        for (int i = 100; i <= n; i++)
        {
            n100 = i / 100;        // 100�� �ڸ�
            n10 = (i / 10) % 10;    // 10�� �ڸ�
            n1 = i % 10;            // 1�� �ڸ�

            if ((n100 - n10) == (n10 - n1))
                cnt++;
        }
        cout << cnt;
    }
    return 0;
}