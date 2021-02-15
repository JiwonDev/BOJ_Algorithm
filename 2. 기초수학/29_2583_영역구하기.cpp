//
// Created by sylve on 2021-02-16.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void drawRect(int &x1, int &y1, int &x2, int &y2); // �簢���� �׸��� �Լ�
int getSize_dfs(int x, int y); // �簢�� Ž�� �Լ�

int M, N;
bool MAP[101][101];

/**
 * ���� 2583�� �������ϱ�
 * M * N ������(�ִ� 100*100)����
 * K���� ���簢���� ��ǥ�� �־��� ��
 * �� ���簢�� ������ ������� �����(����)�� ���� �ʺ� ���Ͽ�.
 *
 * Ǯ��
 * 1. �����ϰ� 100*100 bool �迭�� �簢���� �׸���. (True)
 * 2. �� ����� ���� dfs�� 0,0���� ������ ũ�⸦ ���Ѵ�.
 *      - �湮�Ѱ��� True�� �����.
 *      - �����¿� ��� ��輱(True)�� ���� ������ �ݺ� �� ��� Ž�� Ƚ���� ����.
 *      - �ش� Ž��Ƚ�� = ���� ���簢���� ����
 *
 * 3. ��� �迭(100*100)�� �湮(True) �� ������ �ݺ�.
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
            if (!MAP[i][j]) // ��������� ����
                answer.push_back(getSize_dfs(i, j));

    sort(answer.begin(), answer.end());
    cout << answer.size() << endl;

    for(auto area: answer)
        cout << area << " ";
}

/**
 * 100*100 ���� �迭 map�� bool�� �簢���� �׸��ϴ�.
 * @param x1 int&, x1 ��ǥ��
 * @param y1 int&, y1 ��ǥ��
 * @param x2 int&, x2 ��ǥ��
 * @param y2 int&, y2 ��ǥ��
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
    // �簢�� ��踦 �����ٸ� ����
    if (x < 0 || x >= M || y < 0 || y >= N) return 0;
    if (MAP[x][y]) return 0;

    // �簢�� ũ�⸦ dfs�� Ž����.
    MAP[x][y] = true;
    int visited_count = 1;

    //0~�ִ�ũ�� ���� Ž����.
    visited_count += getSize_dfs(x - 1, y);
    visited_count += getSize_dfs(x + 1, y);
    visited_count += getSize_dfs(x, y - 1);
    visited_count += getSize_dfs(x, y + 1);

    return visited_count;
}
