//
// Created by sylve on 2021-01-02.
// �׽�Ʈ ���̽��� �� (T)�� ù�ٿ� �Է¹ް�
// �� ���ڸ�ŭ �Է°��� �޾� ���ؼ� ����Ͻÿ�.
#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;
int main(){
    int a, b;
    int count=0;
    cin >> count;

    if(count<1) return 0;

    list<int> ans; // list ���. �ٵ� vector�� �� ������.

    for(int i=0; i<count; i++){
        cin >> a >> b;
        ans.push_back(a+b);
    }

    for(int i:ans){ // for each ��
        cout << i << endl;
    }
}