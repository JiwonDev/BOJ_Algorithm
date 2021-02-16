//
// Created by sylve on 2021-02-17.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int N;
int map[25][25];
bool visited[25][25];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int house_count;
// 1시간만에 dfs를 return 쓰는거보다 전역변수 하나가 편하다는걸 깨달음..ㅎ;
void dfs(int x, int y);

int main(){
    string line;
    vector<int> answer;

    cin >> N;

    // 1. 지도 입력
    for (int i = 0; i < N; ++i) {
        cin >> line;
        for (int j = 0; j < N; ++j)
            map[i][j] = line[j] - '0';
    }

    // 2. dfs
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if(!visited[i][j] && map[i][j] == 1) {
                house_count = 0;
                dfs(i, j);
                answer.push_back(house_count);
            }
        }
    }

    cout << answer.size() << "\n";

    sort(answer.begin(), answer.end());
    for(int c:answer)
        cout << c << "\n";
    return 0;
}

void dfs(int x, int y){
    visited[x][y] = true;
    house_count++;

    for (int i = 0; i < 4; ++i) {
        int x2 = x + dx[i];
        int y2 = y + dy[i];

        if(x2 < 0 || x2 >= N || y2 <0 || y2 >= N)
            continue;

        if(map[x2][y2] == 1 && !visited[x2][y2])
            dfs(x2,y2);
    }
}