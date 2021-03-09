//
// Created by sylve on 2021-03-02.
//

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


int getRedrawCount(int x, int y, string* board, string* orginal);

void input(pair<int, int>& inputs, string (&board)[50])
{
    cin >> inputs.first >> inputs.second;
    for(int i = 0; i < inputs.first; i++)
        cin >> board[i];

}

void solution(pair<int, int>& inputs, string (&board)[50])
{
    string WB[8] = {// 맞는 보드 1
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW"
    };
    string BW[8] = { // 맞는 보드 2
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB",
            "BWBWBWBW",
            "WBWBWBWB"
    };

    int temp;
    int min_val = 9999999;

    for(int i = 0; i + 8 <= inputs.first; i++)
    {
        for(int j = 0; j + 8 <= inputs.second; j++)
        {
            temp = min(getRedrawCount(i, j, board, WB), getRedrawCount(i, j, board, BW));
            if(temp < min_val)
                min_val = temp;
        }
    }
    cout << min_val;

}

int getRedrawCount(int x, int y, string* board, string* orginal)
{
    int redrawCount = 0;
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            if(board[x+i][y+j] != orginal[i][j])
                redrawCount++;
    return redrawCount;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    pair<int, int> inputs;
    string board[50];
    input(inputs, board);
    solution(inputs, board);

    return 0;
}