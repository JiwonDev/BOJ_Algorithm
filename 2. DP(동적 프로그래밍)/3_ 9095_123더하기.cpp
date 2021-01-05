//
// Created by sylve on 2021-01-05.
//  정수 4를 1, 2, 3의 합으로 나타내는 방법은 총 7가지가 있다. 합을 나타낼 때는 수를 1개 이상 사용해야 한다.

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