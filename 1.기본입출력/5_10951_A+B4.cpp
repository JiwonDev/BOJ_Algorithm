//
// Created by sylve on 2021-01-02.
// 입력 할 때마다 두 값의 합을 출력하시오.
// 종료시점은 파일이 끝나거나 EOF를 입력한 시점.


#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
    int a, b;

    while(cin >> a >> b){
        cout << a+b << endl;
    }
}