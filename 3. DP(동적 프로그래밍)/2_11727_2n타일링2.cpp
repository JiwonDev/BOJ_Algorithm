
// Created by sylve on 2021-01-04.
// 2��n ���簢���� 1��2, 2��1�� 2��2 Ÿ�Ϸ� ä��� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// �� ����� ���� 10007�� ���� �� �������� ����Ͻÿ�
#include <iostream>
using namespace std;

int n;
long long rect[1001];

int main() {
    cin >> n;
    rect[0] = 1;
    rect[1] = 1;
    for (int i = 2; i <= n; i++) {
        rect[i] = (rect[i - 1] + rect[i - 2]*2)%10007;
    }
    cout << rect[n] << '\n';
    return 0;
}
