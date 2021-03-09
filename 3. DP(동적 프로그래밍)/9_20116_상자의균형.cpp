//
// Created by sylve on 2021-03-09.
//

//
// Created by sylve on 2021-03-09.
//

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void input(int &n, int &size, vector<int> &centers) {
    cin >> n >> size;
    int temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        centers.push_back(temp);
    }
}

void solution(int &n, int &size, vector<int> &centers) {
    double prevSum = centers[n-1];
    int count = 1;
    double currentCenter;
    bool isStable = true;

    for (int i = n-2; i >= 0 ; --i) {
        currentCenter = prevSum / count;
        if(currentCenter <= centers[i]-size || currentCenter >= centers[i]+size){
            isStable = false;
            break;
        }
        prevSum += centers[i];
        ++count;
    }
    if(isStable)
        cout << "stable" << endl;
    else
        cout << "unstable" << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, size;
    vector<int> centers;
    input(n, size, centers);
    solution(n, size, centers);

    return 0;
}