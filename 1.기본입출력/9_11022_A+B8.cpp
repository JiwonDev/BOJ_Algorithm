//
// Created by sylve on 2021-01-02.
// ù�ٿ��� �׽�Ʈ ���̽��� ��(T)�� �־�����.
// ����� Case #n: �Է°�1 + �Է°�2 = ��� �� ����Ͻÿ�

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