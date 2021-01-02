//
// Created by sylve on 2021-01-02.
// 두 수의 입력이 들어올때마다 합을 출력하시오.
// 종료시점은 0 0 이 값으로 들어오면 종료
#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
    int a, b;

    while(true){
        cin >> a >> b;
        if(a+b == 0) break; // 입력값은 0~10
        cout << a+b << endl;
    }
}
