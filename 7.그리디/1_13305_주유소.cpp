#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long dis[100001];
    long long gasPrice[100001];
    long long n=0, answer=0 ;
    long long greedyPrice=0;

    cin >> n;

    for (int i = 1; i <= n - 1; i++)
        cin >> dis[i];

    for (int i = 1; i <= n; i++)
        cin >> gasPrice[i];

    greedyPrice = 1000000000;

    for (int i = 1; i <= n - 1; i++)
    {
        if (gasPrice[i] < greedyPrice)
            // 지금까지 사용한 최저기름값과 현재기름값을 비교하여
            // 더 낮은 가격을 선택 후 이동한다. (최저기름값도 업데이트)
            greedyPrice = gasPrice[i];
        answer += greedyPrice * dis[i];
    }

    cout << answer;
}