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
    int n; // ��� ��
    int str,end;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> str >> end;
        times.push_back(make_pair(str, end));
    }
    sort(times.begin(), times.end(), compare);

    int answer = 0;
    int current = 0;
    // ����ð��� ª�� ������ ���� ��
    // ������ ���� ȸ�Ǹ� ���޿� ���δ�.
    for(pair<int,int> time : times)
        if(current <= time.first){
            answer += 1;
            current = time.second;
        }
    cout << answer << endl;

}