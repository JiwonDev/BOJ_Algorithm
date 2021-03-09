//
// Created by sylve on 2021-03-09.
//

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void input(int &n, int &length, vector<int> &array) {
    cin >> n >> length;
    int temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        array.push_back(temp);
    }
}

void solution(int &n, int &length, vector<int> &array) {
    long long int currentSum = 0;
    long long int nextSum = 0;
    for (int i = 0; i < length; ++i)
        currentSum += array[i];

    nextSum = currentSum;

    for (int i = 0; i < n-length; ++i) {
        nextSum += array[i+length] - array[i];
        currentSum = max(nextSum, currentSum);
    }
    cout << currentSum << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    vector<int> array;
    input(n, k, array);
    solution(n, k, array);

    return 0;
}
