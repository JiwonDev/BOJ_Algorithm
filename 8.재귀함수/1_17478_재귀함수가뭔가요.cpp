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
        cout << prefix + "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
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
    data.emplace_back("\"����Լ��� ������?\"\n");
    data.emplace_back("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
    data.emplace_back("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
    data.emplace_back("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
    data.emplace_back("��� �亯�Ͽ���.\n");
    int n;
    cin >> n;
    string str = "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    solution(str, data, n);

    return 0;
}