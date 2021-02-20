//
// Created by sylve on 2021-02-20.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, i;
    int ans = 0;
    int max,preSum;

    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
        cin >> arr[i];

    max = arr[0]; // max �ʱ�ȭ
    for (i = 1; i < n; i++) {
        preSum = arr[i-1];

        // ������ ���� �������� ���Ұ��� ����
        // ���� �����Ҷ�(���)�� �ݿ�. ������� �տ��� ���� �������� ����.
        if(preSum > 0 && arr[i] + preSum > 0)
            arr[i] += preSum;

        if(max < arr[i])
            max = arr[i];
    }

    cout << max << endl;
    return 0;
}