//
// Created by sylve on 2021-02-20.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, i;
    int ans = 0;
    int max,preSum;

    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
        cin >> arr[i];

    max = arr[0]; // max 초기화
    for (i = 1; i < n; i++) {
        preSum = arr[i-1];

        // 이전에 구한 연속합을 더할건지 여부
        // 값이 증가할때(양수)만 반영. 음수라면 앞에서 구한 연속합은 버림.
        if(preSum > 0 && arr[i] + preSum > 0)
            arr[i] += preSum;

        if(max < arr[i])
            max = arr[i];
    }

    cout << max << endl;
    return 0;
}