#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int cost[1000]; // �����ϴµ� �ɸ��� �ð�
    int n; // ��� ��

    cin >> n;
    for (int i = 0; i < n; i++) cin >> cost[i];
    sort(cost, cost + n); //cost[0]~cost[n] ����

    // �����Ѱ� �ϳ��ϳ� ���ϸ� ��.
    // ������ ��� = p[0]~p[n]
    // �״��� ��� = p[0]~p[n-1] ...

    long long answer = 0;

    for (int i = n; i > 0; --i)
        for (int j = 0; j < i; ++j)
            answer += cost[j];

    cout << answer << endl;
}