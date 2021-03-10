//
// Created by sylve on 2021-03-10.
//

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include <numeric>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,height;
    cin >> n >> height;
    vector<int> bot(height+1,0);
    vector<int> top(height+1,0);

    int temp;
    for (int i = 0; i < n/2; ++i){
        cin >> temp;
        bot[temp]++;
        cin >> temp;
        top[temp]++;
    }

    vector<int> topSum(height+1,0);
    vector<int> botSum(height+1,0);

    for (int i = 1; i <= height; ++i) {
        topSum[i] = topSum[i-1] + top[i];
        botSum[i] = botSum[i-1] + bot[i];
    }
    int minimum = n;
    int count = 0;

    for (int i = 1; i <= height; ++i) {
        int hitCount = 0;
        hitCount += botSum[height] - botSum[i-1];
        // 전체 장애물 갯수 - i-1이하인 장애물 갯수
        hitCount += topSum[height] - topSum[height-i];
        // top은 거꾸로 (height-i)

        if(hitCount < minimum){
            minimum = hitCount;
            count = 1;
        } else if (hitCount == minimum)
            ++count;
    }

    cout << minimum << " " << count << endl;

    return 0;
}