//
// Created by sylve on 2021-03-09.
//

#include<iostream>
#include<cstdio>
#include<vector>
#include<deque>
#include<string>
#include<algorithm>
#include<unordered_map>


using namespace std;

void input(int &n, vector<int> &array, int &sectionCount, deque<pair<int, int>> &sections) {
    cin >> n;
    int temp1, temp2;
    for (int i = 0; i < n; ++i) {
        cin >> temp1;
        array.push_back(temp1);
    }

    cin >> sectionCount;
    for (int i = 0; i < sectionCount; ++i) {
        cin >> temp1 >> temp2;
        sections.emplace_back(temp1, temp2);
    }
}


void solution(int &n, vector<int> &array, int &sectionCount, deque<pair<int, int>> &sections) {
    int sequenceSum[n];
    sequenceSum[0] = array[0];

    for (int i = 1; i < n; ++i) {
        sequenceSum[i] = sequenceSum[i-1] + array[i];
    }

    while(!sections.empty()){
        auto current = sections.front();
        sections.pop_front();
        if(current.first == 1)
            cout << sequenceSum[current.second-1] << "\n";
        else
            cout << sequenceSum[current.second-1] - sequenceSum[current.first-2] << "\n";
        // first, second가 3~6 구간이라면
        // [1~6] - [1~2] 이런식으로 구한다.
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int sectionCount;
    vector<int> array;
    deque<pair<int,int>> sections;

    input(n,array,sectionCount,sections);
    solution(n,array,sectionCount,sections);

    return 0;
}