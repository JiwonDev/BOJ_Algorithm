//
// Created by sylve on 2021-02-20.
//

//
// Created by sylve on 2021-02-20.
// 1. ť 2. �ٿ���Ʈ��
#include <iostream>
using namespace std;

int board[100][100];
long long cache[100][100] = {0,}; // �ش� ��ȣ���� ���� ����� ��

int main()
{
    int boardSize, jump;
    cin >> boardSize;
    for (int i = 0; i < boardSize; ++i)
        for (int j = 0; j < boardSize; ++j)
            cin >> board[i][j];

    cache[0][0] = 1; // ��������

    for (int i = 0; i < boardSize; i++)
        for(int j = 0; j < boardSize; j++)
        {
            if (cache[i][j] == 0) continue; // ����� ���� ���ٸ� ��ŵ
            if(i == boardSize-1 && j == boardSize-1) continue; // ����

            jump = board[i][j];
            if (i + jump < boardSize)
                cache[i + jump][j] += cache[i][j];
            if (j + jump < boardSize)
                cache[i][j + jump] += cache[i][j];


        }

    cout << cache[boardSize - 1][boardSize - 1] << endl;

}
