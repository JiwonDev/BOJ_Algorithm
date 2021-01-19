//
// Created by sylve on 2021-01-19.
//

#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(void){
    int n;
    cin >> n;
    cin.clear();

    string s;
    stack<char> stack;
    int count = 0;
    bool isLazer = false;

    getline(cin,s);
    for(int j = 0; j < s.size(); ++j) {
        if(s[j] == (char) '('){
            stack.push('(');
            isLazer = true;
        }
        else if (s[j] == (char) ')'){
            if(stack.empty())
                return -1; // ����ó��.

            stack.pop();
            if(isLazer)
                count += stack.size(); // ������ �ѹ��� ������������ŭ �þ.(=���ʰ�ȣ ����)
            else
                count += 1; // �������� ���� ���. ����1����
            isLazer = false;
        }
    }
    cout << count << endl;
    return 0;
}