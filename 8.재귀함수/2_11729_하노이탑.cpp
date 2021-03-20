#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


void hanoi(int n, int from, int temp, int to, vector<pair<int,int>>& record) {
    /*
     * 하노이탑 (고전 알고리즘)
     * 아래층을 1개씩 옮긴다.
     *
     * ( A ) ( B ) ( C )
     * (from) (temp) (to)
     * N-1개 [A->B]
     * 남은 1개를 [A->C]
     * B에 있는 남은 원판을 [B->C]
     *
     * C 제일 아래 원판은 무시.
     * 남은 원판은 C에 다있고, B는 비어있음
     * C를 A로 바꿔서 재귀.
     * ( A ) ( B ) ( C )
     * (to) (temp) (from)
     */

    if (n == 1) record.emplace_back(from, to); // 1개 남았다면 종료.
    else {
        // 분할정복.

        hanoi(n-1, from, to, temp, record);
        // n-1개를 [A->B], n-1개가 1개로 될 때까지 이 과정 또한 n-1 해가면서 재귀적으로 해결 가능.
        record.emplace_back(from, to);
        // 남은 원판 1개 [A->C]
        hanoi(n-1, temp, from, to, record);
        // n-1개를 [B->C], n-1개가 1개로 될 때까지 이 과정 또한 n-1 해가면서 재귀적으로 해결 가능.
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