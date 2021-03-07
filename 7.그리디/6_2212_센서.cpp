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
    sort(center.begin(),center.end()); // ���������� ����

    for (int i = 0; i < n-1; ++i)
        distance.push_back(center[i+1] - center[i]);

    sort(distance.begin(),distance.end()); // ���������� ����

    if(k>=n)// ���߱��� ������ �� �������->�Ÿ� 0
        answer = 0;
    else // �ָ��ִ°� ���߱����� Ŀ��ġ�� ������ ���̸� ����.
        for (int i = 0; i < n-k; ++i)
            answer += distance[i];

    cout << answer << endl;
//    for(auto c:center)
//        cout << c << endl;


}