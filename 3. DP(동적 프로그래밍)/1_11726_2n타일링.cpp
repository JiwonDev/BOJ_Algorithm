//
// Created by sylve on 2021-01-03.
//2��n ũ���� ���簢���� 1��2, 2��1 Ÿ�Ϸ� ä��� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//* ����� ���� %10007�� ���� �������� ����Ͻÿ�.

#include <iostream>
using namespace std;

int main() {
    int n,rect[1001];
    cin >> n;
    rect[1] = 1;
    rect[2] = 2;
    for (int i = 3; i <= n; i++) {
        // f(n) = f(n-1) + f(n-2)
        rect[i] = (rect[i - 1] + rect[i - 2])%10007;
    }
    cout << rect[n] << '\n';
    return 0;
}

int main(){
    for (int i = 0; i < 3; ++i) {

    }

}

