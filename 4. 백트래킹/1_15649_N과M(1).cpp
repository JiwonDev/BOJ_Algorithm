//
// Created by sylve on 2021-02-24.
//

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void input(int &n, int &m)
{
    cin >> n >> m;
}

void solution(int cnt, const int lastNumber, const int length, vector<int> &arr, vector<bool> &visited){
    if (cnt == length) // 출력
    {
        for (int i = 0; i < length; ++i)
            cout << arr[i] << " ";
        cout << "\n";
        return;
    }

    for (int i = 1; i <= lastNumber; ++i) {
        // 모든 경우의 수를 재귀함. (백트래킹)
        if(!visited[i])
        {
            visited[i] = true;
            arr[cnt] = i;
            solution(cnt + 1, lastNumber, length, arr, visited);
            visited[i] = false;
        }
    }
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int max = 9;
    int n, m;

    vector<int> arr(max);
    vector<bool> visited(max);

    input(n,m);
    solution(0,n,m,arr,visited);

    return 0;
}