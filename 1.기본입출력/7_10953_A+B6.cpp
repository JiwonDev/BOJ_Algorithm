//
// Created by sylve on 2021-01-02.
// ù �ٿ� �׽�Ʈ ���̽��� ������ �־�����.
// �� �׽�Ʈ ���̽��� ���� ���Ͻÿ�. �� ���� ������Ⱑ �ƴ� �޸�(,)�� ���еȴ�.

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