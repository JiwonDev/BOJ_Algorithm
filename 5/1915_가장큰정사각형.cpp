//
// Created by sylve on 2021-02-20.
//
#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    string s;
    int arr[1000][1000];

    for (int i = 0; i < n; ++i)
        cin >> s;
        for (int j = 0; j < m; ++j)
            arr[i][j] = s[j];

    bool isSizeup = true;
    int size = 1;

    while(isSizeup){
        isSizeup = false;
        for (int i = 0; i < n-1; ++i) {
            for (int j = 0; j < m - 1; ++j) {

                if (arr[i][j] < size) continue;

                if (arr[i + 1][j] == size && arr[i][j + 1] == size && arr[i + 1][j + 1] == size){
                    isSizeup = true
                    arr[i][j]++;
                }
            }

            if (i + 1 == n && j == m) {// j는 이미 ++ 되어있음.
                i = 0;
                j = 0;
                size++;
            }
        }
    }

    size = size-1;
    cout << size*size << endl;

}
