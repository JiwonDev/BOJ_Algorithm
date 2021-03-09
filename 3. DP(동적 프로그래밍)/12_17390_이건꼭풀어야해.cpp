//
// Created by sylve on 2021-03-09.
//

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include <deque>

using namespace std;

void input(int &length, int &n, deque<pair<int, int>> &section, vector<int> &array) {
    cin >> length >> n;
    int temp1, temp2;
    for (int i = 0; i < length; ++i) {
        cin >> temp1;
        array.push_back(temp1);
    }

    for (int i = 0; i < n; ++i) {
        cin >> temp1 >> temp2;
        section.emplace_back(temp1, temp2);
    }
}

void solution(int &length, int &n, deque<pair<int, int>> &section, vector<int> &array) {
    sort(array.begin(),array.end());
    long long int sequenceSum[length];
    sequenceSum[0] = array[0];
    for (int i = 1; i < length; ++i)
        sequenceSum[i] = sequenceSum[i-1] + array[i];

    while(!section.empty()){
        auto current = section.front();
        section.pop_front();

        if(current.first == 1)
            cout << sequenceSum[current.second-1] << "\n";
        else
            cout << sequenceSum[current.second-1] - sequenceSum[current.first-2] << "\n";

    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    deque<pair<int, int>> sections;
    vector<int> array;
    input(n, q, sections, array);
    solution(n, q, sections, array);

    return 0;
}