//
// Created by sylve on 2021-02-20.
//

//
// Created by sylve on 2021-02-20.
// 1. 큐 2. 다엑스트라
#include <iostream>
using namespace std;

int board[100][100];
long long cache[100][100] = {0,}; // 해당 번호까지 가는 경우의 수

int main()
{
    int boardSize, jump;
    cin >> boardSize;
    for (int i = 0; i < boardSize; ++i)
        for (int j = 0; j < boardSize; ++j)
            cin >> board[i][j];

    cache[0][0] = 1; // 시작지점

    for (int i = 0; i < boardSize; i++)
        for(int j = 0; j < boardSize; j++)
        {
            if (cache[i][j] == 0) continue; // 경우의 수가 없다면 스킵
            if(i == boardSize-1 && j == boardSize-1) continue; // 도착

            jump = board[i][j];
            if (i + jump < boardSize)
                cache[i + jump][j] += cache[i][j];
            if (j + jump < boardSize)
                cache[i][j + jump] += cache[i][j];


        }

    cout << cache[boardSize - 1][boardSize - 1] << endl;

}
