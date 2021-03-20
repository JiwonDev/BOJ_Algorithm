//
// Created by sylve on 2021-03-20.
//

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void recursion(vector<string> data, const int count, string prefix=""){
    if(count == 0){
        cout << prefix + data[0];
        cout << prefix + "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
        cout << prefix + data.back();
        return;
    }

    for (int i = 0; i < data.size()-1; ++i)
        cout << prefix + data[i];
    recursion(data,count-1, prefix+"____");
    cout << prefix + data.back();
}

void solution(string str, vector<string> data, const int count)
{
    cout << str;
    recursion(data,count);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<string> data;
    data.emplace_back("\"재귀함수가 뭔가요?\"\n");
    data.emplace_back("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
    data.emplace_back("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
    data.emplace_back("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
    data.emplace_back("라고 답변하였지.\n");
    int n;
    cin >> n;
    string str = "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
    solution(str, data, n);

    return 0;
}