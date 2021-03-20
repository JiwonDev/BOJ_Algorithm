//
// Created by sylve on 2021-03-20.
//

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void drawBox(vector<vector<char>>& board, int x, int y, int boxSize, char shape) {
    if (boxSize == 1) {
        board[x][y] = shape;
        return;
    }

    // 3*3, �� 9���� �簢���� �׸��鼭 ���
    // ��� (i=1, j=1)�� ��� �������� ä��

    int new_x, new_y;
    int small_boxSize = boxSize/3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // ������ �簢���� ��������� �׸�.
            // (��) ��  ��
            //  ��  -   ��
            //  ��  ��  ��

            // ( �� ) �� ��������� �ݺ��ؼ� �׸�.
            // ���� ����� �ڽ� ������ = boxSize / 3 (27 -> 9 -> 3 -> 1)
            new_x = i * small_boxSize + x;
            new_y = j * small_boxSize + y;

            if (i == 1 && j == 1)
                drawBox(board, new_x, new_y, small_boxSize, ' ');
            else{
                drawBox(board, new_x, new_y, small_boxSize, shape);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<vector<char>> board(n, vector<char>(n));
    drawBox(board, 0, 0, n, '*');

    for (const auto& vec : board) {
        for (auto item : vec)
            cout << item;
        cout << endl;
    }

    return 0;
}