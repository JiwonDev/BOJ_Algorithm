//
// Created by sylve on 2021-01-05.
//  ���� 4�� 1, 2, 3�� ������ ��Ÿ���� ����� �� 7������ �ִ�. ���� ��Ÿ�� ���� ���� 1�� �̻� ����ؾ� �Ѵ�.

#include <stdio.h>

int main(void){
    int testcase;
    scanf("%d", &testcase);
    while (testcase--){
        int array[15] = {};
        array[0] = 1;
        int K;
        scanf("%d", &K);

        for (int i = 1; i <= K; i++){

            if (i-1>=0)
                array[i] += array[i - 1];
            if (i - 2 >= 0)
                array[i] += array[i - 2];
            if (i - 3 >= 0)
                array[i] += array[i - 3];
        }

        printf("%d\n", array[K]);

    }
    return 0;
}