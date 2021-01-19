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
                return -1; // 오류처리.

            stack.pop();
            if(isLazer)
                count += stack.size(); // 레이저 한번에 파이프갯수만큼 늘어남.(=왼쪽괄호 갯수)
            else
                count += 1; // 파이프가 끝난 경우. 남은1조각
            isLazer = false;
        }
    }
    cout << count << endl;
    return 0;
}