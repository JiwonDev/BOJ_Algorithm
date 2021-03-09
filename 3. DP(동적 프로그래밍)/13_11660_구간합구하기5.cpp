//
// Created by sylve on 2021-03-09.
//

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int size, m;
    cin >> size >> m;

    int array[size][size];

    int rowSum[size][size];
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j) {
            cin >> array[i][j];
            if (j == 0)
                rowSum[i][j] = array[i][j];
            else
                rowSum[i][j] = rowSum[i][j - 1] + array[i][j];
        }

    pair<int, int> str, end;
    long long int rectSum = 0;

    if (size == 1){
        cin >> str.first >> str.second;
        cin >> end.first >> end.second;
        cout << array[0][0] << "\n";
    } else {
        for (int i = 0; i < m; ++i) {
            cin >> str.first >> str.second;
            cin >> end.first >> end.second;
            //        printf("> %d %d, %d %d\m",str.first,str.second,end.first,end.second);

            rectSum = 0;
            // 좌표가 같다면 해당 좌표 출력
            if (str.first == end.first && str.second == end.second)
                cout << array[str.first - 1][str.second - 1] << "\n";
            else {
                // 한줄씩 사각형 넓이 계산
                for (int row = str.first - 1; row < end.first; ++row) {
                    if(str.second == 1) // 시작점이 0이라면
                        rectSum += rowSum[row][end.second - 1];
                    else
                        // 전체 - (0~str) - (전체 - (0~end))
                        rectSum += rowSum[row][end.second - 1] - rowSum[row][str.second - 2];

                }
                cout << rectSum << "\n";
            }
        }
    }

    return 0;
}