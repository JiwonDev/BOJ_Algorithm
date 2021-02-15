//
// Created by sylve on 2021-02-16.
//

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int getShortestPath(int x1, int y1, int x2, int y2, int side);

/**
 * ���� 7562 ����Ʈ�� �̵�
 * ü���� ���� ����Ʈ�� �������ִ�.
 * ù �ٿ��� ���̽��� ����(K), �� ���ķδ� �� �׽�Ʈ ���̽� ���� 3���� ���� �־�����
 * ���簢���� ü���� �Ѻ��� ����( 4 <= l <= 300 ), ����Ʈ�� ��ġ, �̵� �� ��ġ
 * �� ���̽����� ����Ʈ�� �ּ� �� ������ �̵��� �� �ִ��� ����Ѵ�.
 *
 * Ǯ��
 * ����� BFS(=ť) ����� ����
 * ����Ʈ�� ������ �� �ִ� ����� ���� �̸� �����θ� ���ϴ�.

    *** 2�ð� �ɸ� ���� : visited�� ���� �ϸ� �ȵȴٴ� ����� �����. �������� ��������
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
    // pair<�̵� Ƚ��, pair<��ǥ>>

    int count=0; // �̵� Ƚ��
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

