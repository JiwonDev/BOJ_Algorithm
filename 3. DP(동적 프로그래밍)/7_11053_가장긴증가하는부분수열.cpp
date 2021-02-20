//
// Created by sylve on 2021-02-20.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[1000]={0,};
    int seqCount[1000]={0,}; // 부분 수열 길이
    int n, ans;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    seqCount[0] = 1;
    for(int i = 1; i < n; ++i) {
        seqCount[i] = 1;
        for (int j = 0; j < i; ++j) {
            if(arr[j] < arr[i] && (seqCount[j]+1) > seqCount[i])
                seqCount[i] = seqCount[j] + 1;
        }
    }

    ans = seqCount[0];
    for (int i = 0; i < n; i++)
        ans = max(ans, seqCount[i]);
    cout << ans << endl;
}