//
// Created by sylve on 2021-02-20.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int arr[1001];
    int seqCount[1001];
    int reverseCount[1001];
    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> arr[i];


    //순방향 가장 긴 수열
    for(int i = 1; i <= n; i++){
        seqCount[i] = 1;
        for(int j = 1; j < i; j++)
            if(arr[i] > arr[j] && seqCount[i] < seqCount[j] + 1)
                seqCount[i] = seqCount[j] + 1;
    }

    //역방향 가장 긴 수열
    for(int i = n; i >= 1; i--){
        reverseCount[i] = 1;
        for(int j = n; j > i; j--)
            if(arr[i] > arr[j] && reverseCount[i] < reverseCount[j] + 1)
                reverseCount[i] = reverseCount[j] + 1;
    }

    int ans = 0;
    for(int i = 1; i <= n; i++)
        ans = max(seqCount[i]+reverseCount[i], ans);


    //가운데 겹치는부분 -1
    cout << ans-1 << '\n';

    return 0;
}