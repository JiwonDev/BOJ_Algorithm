//
// Created by sylve on 2021-01-11.
//
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int arr[10001]={0,};
    int n;
    int i;

    cin >> n;
    for (i = 0; i < n; ++i) {

        int tmp;
        scanf("%d", &tmp);
        arr[tmp]++;
    }
    for (i = 1; i <= 10000; ++i) {
        for (int j = 0; j < arr[i]; ++j)
            printf("%d\n", i);
    }
    return 0;
}
