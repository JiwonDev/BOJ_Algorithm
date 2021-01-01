/*
깃 초기화 및 테스트파일
2021.01.01 작성
*/
#include <cstdio>


int main() {
    bool isPrime[1000001];
    int m, n;
    int i, j;
    scanf("%d %d", &m, &n);
    for (i = 2; i <= 1000000; i++)
        isPrime[i] = true;
    isPrime[1] = false;

    for (i = 2; i <= 1000000; i++)
        if (isPrime[i] == true)
            for (j = i + i; j <= 1000000; j += i)
                isPrime[j] = false;

    for (i = m; i <= n; i++)
        if (isPrime[i])
            printf("%d\n", i);


    return 0;

}
