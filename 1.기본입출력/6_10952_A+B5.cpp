//
// Created by sylve on 2021-01-02.
// �� ���� �Է��� ���ö����� ���� ����Ͻÿ�.
// ��������� 0 0 �� ������ ������ ����
#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
    int a, b;

    while(true){
        cin >> a >> b;
        if(a+b == 0) break; // �Է°��� 0~10
        cout << a+b << endl;
    }
}
