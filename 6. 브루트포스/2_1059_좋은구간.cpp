//
// Created by sylve on 2021-03-03.
//1059 좋은구간

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void input(int& size, int& n, vector<int>& vec)
{
    cin >> size;
    vec.assign(size,0);
    for (int i = 0; i < size; i++) {
        std::cin >> vec[i];
    }
    cin >> n;
}

void solution(int& size, int& n, vector<int>& vec)
{

    int start = 0;
    int end = 0;

    sort(vec.begin(), vec.end());

    bool isSame = false;

    for (int i = 0; i < size; i++)
        if (vec[i] == n) {
            isSame = true;
            break;
        }

    if (isSame)
        cout << 0 << "\n";//n이 집합에 포함되어있는경우
    else {
        for (int i = 0; i < size; i++)
            if (vec[i] > n) { // 범위지정
                start = vec[i - 1];
                end = vec[i];
                break;
            }

        int answer = 0;

        for (int i = start + 1; i < end; i++) // 갯수 세기
            for (int j = i + 1; j < end; j++)
                if (i <= n && n <= j)
                    answer++;

        cout << answer << "\n";
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int size,n;
    vector<int> vec;

    input(size,n,vec);
    solution(size,n,vec);

}