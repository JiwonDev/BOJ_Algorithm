//
// Created by sylve on 2021-03-07.
//

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    vector<int> center;
    vector<int> distance;
    int answer = 0;
    cin >> n >> k;

    int temp = 0;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        center.push_back(temp);
    }
    sort(center.begin(),center.end()); // 빠른순으로 정렬

    for (int i = 0; i < n-1; ++i)
        distance.push_back(center[i+1] - center[i]);

    sort(distance.begin(),distance.end()); // 작은순으로 정렬

    if(k>=n)// 집중국의 갯수가 더 많은경우->거리 0
        answer = 0;
    else // 멀리있는걸 집중국으로 커버치고 나머지 길이를 더함.
        for (int i = 0; i < n-k; ++i)
            answer += distance[i];

    cout << answer << endl;
//    for(auto c:center)
//        cout << c << endl;


}