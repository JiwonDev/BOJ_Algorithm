//
// Created by sylve on 2021-01-02.
// ù�ٿ��� �׽�Ʈ ���̽��� ���� �־�����.
// �� �׽�Ʈ ���̽��� �� ����� Case #n: ����� ����Ͻÿ�.
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

