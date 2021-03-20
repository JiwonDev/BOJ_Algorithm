#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


void hanoi(int n, int from, int temp, int to, vector<pair<int,int>>& record) {
    /*
     * �ϳ���ž (���� �˰���)
     * �Ʒ����� 1���� �ű��.
     *
     * ( A ) ( B ) ( C )
     * (from) (temp) (to)
     * N-1�� [A->B]
     * ���� 1���� [A->C]
     * B�� �ִ� ���� ������ [B->C]
     *
     * C ���� �Ʒ� ������ ����.
     * ���� ������ C�� ���ְ�, B�� �������
     * C�� A�� �ٲ㼭 ���.
     * ( A ) ( B ) ( C )
     * (to) (temp) (from)
     */

    if (n == 1) record.emplace_back(from, to); // 1�� ���Ҵٸ� ����.
    else {
        // ��������.

        hanoi(n-1, from, to, temp, record);
        // n-1���� [A->B], n-1���� 1���� �� ������ �� ���� ���� n-1 �ذ��鼭 ��������� �ذ� ����.
        record.emplace_back(from, to);
        // ���� ���� 1�� [A->C]
        hanoi(n-1, temp, from, to, record);
        // n-1���� [B->C], n-1���� 1���� �� ������ �� ���� ���� n-1 �ذ��鼭 ��������� �ذ� ����.
    }
}

void solution(int n, int from, int temp, int to, vector<pair<int, int>>& record) {
    hanoi(n,from,temp,to,record);
    cout << record.size() << "\n";

    for(auto [item1,item2] : record)
        cout << item1 << " " << item2 << "\n";

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    vector<pair<int,int>> record;
    cin >> n;
    solution(n,1,2,3,record);

    return 0;
}