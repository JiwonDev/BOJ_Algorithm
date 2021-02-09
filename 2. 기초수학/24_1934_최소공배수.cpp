//
// Created by sylve on 2021-02-09.
//

#include <cstdio>
#include <string>
#include <iostream>
#include <list>
using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int a, b, result;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        result = lcm(a,b);
        cout << lcm(a,b) << "\n";
    }
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
