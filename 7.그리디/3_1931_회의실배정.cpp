//
// Created by sylve on 2021-03-07.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if(a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

int main() {
    vector<pair<int,int>> times;
    int n; // 사람 수
    int str,end;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> str >> end;
        times.push_back(make_pair(str, end));
    }
    sort(times.begin(), times.end(), compare);

    int answer = 0;
    int current = 0;
    // 종료시간이 짧은 순으로 정렬 후
    // 가능한 많은 회의를 연달에 붙인다.
    for(pair<int,int> time : times)
        if(current <= time.first){
            answer += 1;
            current = time.second;
        }
    cout << answer << endl;

}