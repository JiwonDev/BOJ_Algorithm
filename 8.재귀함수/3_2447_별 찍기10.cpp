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

    // 3*3, 총 9개의 사각형을 그리면서 재귀
    // 가운데 (i=1, j=1)인 경우 공백으로 채움

    int new_x, new_y;
    int small_boxSize = boxSize/3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // 각각의 사각형을 재귀적으로 그림.
            // (ㅁ) ㅁ  ㅁ
            //  ㅁ  -   ㅁ
            //  ㅁ  ㅁ  ㅁ

            // ( ㅁ ) 를 재귀적으로 반복해서 그림.
            // 다음 재귀할 박스 사이즈 = boxSize / 3 (27 -> 9 -> 3 -> 1)
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