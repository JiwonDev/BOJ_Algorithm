//
// Created by sylve on 2021-02-16.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void drawRect(int &x1, int &y1, int &x2, int &y2); // 사각형을 그리는 함수
int getSize_dfs(int x, int y); // 사각형 탐색 함수

int M, N;
bool MAP[101][101];

/**
 * 백준 2583번 영역구하기
 * M * N 모눈종이(최대 100*100)에서
 * K개의 직사각형의 좌표가 주어질 때
 * 그 직사각형 때문에 만들어진 빈공간(도형)의 수와 너비를 구하오.
 *
 * 풀이
 * 1. 무식하게 100*100 bool 배열에 사각형을 그린다. (True)
 * 2. 각 빈공간 마다 dfs로 0,0부터 시작해 크기를 구한다.
 *      - 방문한곳은 True로 만든다.
 *      - 상하좌우 모두 경계선(True)를 만날 때까지 반복 후 모든 탐색 횟수를 더함.
 *      - 해당 탐색횟수 = 현재 직사각형의 넓이
 *
 * 3. 모든 배열(100*100)을 방문(True) 할 때까지 반복.
 */

int main() {
    int k;
    cin >> M >> N >> k;
    vector<int> answer;

    int x1, x2, y1, y2;
    for (int i = 0; i < k; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        drawRect(x1, y1, x2, y2);
    }

    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (!MAP[i][j]) // 빈공간에서 시작
                answer.push_back(getSize_dfs(i, j));

    sort(answer.begin(), answer.end());
    cout << answer.size() << endl;

    for(auto area: answer)
        cout << area << " ";
}

/**
 * 100*100 전역 배열 map에 bool로 사각형을 그립니다.
 * @param x1 int&, x1 좌표값
 * @param y1 int&, y1 좌표값
 * @param x2 int&, x2 좌표값
 * @param y2 int&, y2 좌표값
 */
void drawRect(int &x1, int &y1, int &x2, int &y2) {
    if(y1 > y2)
        swap(y1,y2); // <algorithm>

    if(x1 > x2)
        swap(x1,x2);

    for (int i = y1; i < y2; i++)
        for (int j = x1; j < x2; j++)
            MAP[i][j] = true;
}

int getSize_dfs(int x, int y) {
    // 사각형 경계를 만났다면 종료
    if (x < 0 || x >= M || y < 0 || y >= N) return 0;
    if (MAP[x][y]) return 0;

    // 사각형 크기를 dfs로 탐색함.
    MAP[x][y] = true;
    int visited_count = 1;

    //0~최대크기 까지 탐색함.
    visited_count += getSize_dfs(x - 1, y);
    visited_count += getSize_dfs(x + 1, y);
    visited_count += getSize_dfs(x, y - 1);
    visited_count += getSize_dfs(x, y + 1);

    return visited_count;
}
