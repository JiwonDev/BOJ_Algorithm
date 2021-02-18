//
// Created by sylve on 2021-02-18.
//
#include <iostream>
#include <queue>
using namespace std;

int box[1001][1001];
int M, N;

queue<pair<int, int>> que;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

void bfs();

int main(){

    cin >> M >> N;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            cin >> box[i][j];
            if(box[i][j] == 1)
                que.push(make_pair(i, j));
        }
    }

    bfs();

    int answer = 0;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            if(box[i][j] == 0){
                answer = -1;
                break;
            }

            if(answer < box[i][j])
                answer = box[i][j];
        }
        if(answer == -1)
            break;
    }

    answer--;
    cout << answer << '\n';
    return 0;
}


void bfs(){
    while(!que.empty()){
        int x = que.front().first;
        int y = que.front().second;
        que.pop();

        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx <= 0 || nx > N || ny <= 0 || ny > M) continue;
            if(box[nx][ny] == 0){
                box[nx][ny] = box[x][y] + 1;
                que.push(make_pair(nx, ny));
            }
        }
    }
}
