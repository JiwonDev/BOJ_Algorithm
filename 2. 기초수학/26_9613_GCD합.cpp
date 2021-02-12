//
// Created by sylve on 2021-02-12.
//
#include <iostream>

using namespace std;

int gcd(int a, int b){
    if (a%b == 0)
        return b;
    return gcd(b, a % b);
}

int main(void){
    ios_base::sync_with_stdio(0);

    cin.tie(0);

    int n;
    int arr[100];
    cin >> n;

    for (int t = 0; t < n; t++){
        int count;
        cin >> count;

        for (int i = 0; i < count; i++)
            cin >> arr[i];

        long long sum = 0;
        for (int i = 0; i < count; i++)
            for (int j = i + 1; j < count; j++)
                sum += gcd(arr[i], arr[j]);
        cout << sum << "\n";
    }
    return 0;
}
