//
// Created by sylve on 2021-01-02.
// 첫줄에는 테스트 케이스의 수가 주어진다.
// 각 테스트 케이스의 합 결과를 Case #n: 결과로 출력하시오.
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int count,a,b;
    cin >> count;

    for(int i = 0; i < count; ++i) {
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << a+b << endl;
    }

}

