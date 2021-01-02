//
// Created by sylve on 2021-01-02.
// 테스트 케이스의 수 (T)를 첫줄에 입력받고
// 그 숫자만큼 입력값을 받아 더해서 출력하시오.
#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;
int main(){
    int a, b;
    int count=0;
    cin >> count;

    if(count<1) return 0;

    list<int> ans; // list 사용. 근데 vector가 더 빠르다.

    for(int i=0; i<count; i++){
        cin >> a >> b;
        ans.push_back(a+b);
    }

    for(int i:ans){ // for each 문
        cout << i << endl;
    }
}