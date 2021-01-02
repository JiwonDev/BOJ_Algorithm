//
// Created by sylve on 2021-01-02.
// 첫줄에는 테스트 케이스의 수(T)가 주어진다.
// 결과를 Case #n: 입력값1 + 입력값2 = 결과 로 출력하시오

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int count,a,b;
    cin >> count;

    for(int i = 0; i < count; ++i) {
        cin >> a >> b;

        string s = "Case #"+ to_string(i+1) + ": " + to_string(a) + " + " + to_string(b) +" = ";
        cout << s << a+b << endl;
    }

}