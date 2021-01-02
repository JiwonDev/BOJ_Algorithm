//
// Created by sylve on 2021-01-02.
// 첫 줄에 테스트 케이스의 갯수가 주어진다.
// 각 테스트 케이스의 합을 구하시오. 단 값은 띄워쓰기가 아닌 콤마(,)로 구분된다.

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int T;
    int A, B;
    char c;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> A >> c >> B;
        cout << A + B << "\n";
    }
}