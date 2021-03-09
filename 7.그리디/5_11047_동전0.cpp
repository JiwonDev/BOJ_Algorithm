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
    // �׸���� Ǯ�� ū �ݾ׺���  ���ϸ�
    // ���� ���ִ°� ����Ʈ.
    // �ٵ� �� �����غ��� ū �ݾ׺��� ������� ���ִ°� �� ������.
    for (int i = n-1; i >= 0; --i) {
        answer += targetPrice / coins[i];
        targetPrice %= coins[i];
    }

    cout << answer << endl;

    return 0;
}
