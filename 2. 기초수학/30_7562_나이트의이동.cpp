//
// Created by sylve on 2021-02-16.
//

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int getShortestPath(int x1, int y1, int x2, int y2, int side);

/**
 * 백준 7562 나이트의 이동
 * 체스판 위에 나이트가 놓여져있다.
 * 첫 줄에는 케이스의 갯수(K), 그 이후로는 각 테스트 케이스 별로 3개의 값이 주어진다
 * 정사각형인 체스판 한변의 길이( 4 <= l <= 300 ), 나이트의 위치, 이동 할 위치
 * 각 케이스마다 나이트가 최소 몇 번만에 이동할 수 있는지 출력한다.
 *
 * 풀이
 * 대놓고 BFS(=큐) 쓰라는 문제
 * 나이트가 움직일 수 있는 경우의 수를 미리 만들어두면 편하다.

    *** 2시간 걸린 이유 : visited를 재사용 하면 안된다는 사실을 까먹음. 전역변수 쓰지말자
 */
int dx[8]={-2,-2,-1,-1,1,1,2,2};
int dy[8]={1,-1,2,-2,2,-2,1,-1};

int main(){

    int K, l;
    int x1,x2,y1,y2;
    cin >> K;
    int hi;
    for(int i = 0; i < K; ++i) {
        cin >> l >> x1 >> y1 >> x2 >> y2;
        cout << getShortestPath(x1,y1,x2,y2,l) << "\n";
    }

    return 0;
}

int getShortestPath(int x1, int y1, int x2, int y2, int side) {
    bool visited[300][300] = {false,};
    queue<pair<int,pair<int,int>>> que;
    // pair<이동 횟수, pair<좌표>>

    int count=0; // 이동 횟수
    pair<int,int> cur;

    que.push(make_pair(count,make_pair(x1,y1)));
    while(!que.empty()){
        count = que.front().first;
        cur = que.front().second;
        que.pop();

        if(cur.first == x2 && cur.second == y2)
            break;

        for (int i = 0; i < 8; ++i) {
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];

            if(visited[x][y] || x < 0 || x >= side || y < 0 || y >= side)
                continue;
            else{
                visited[x][y] = true;
                que.push(make_pair(count+1, make_pair(x,y)));
            }
        }
    }
    return count;
}

