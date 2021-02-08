//
// Created by sylve on 2021-02-08.
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

    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << "\n" << lcm(a, b) << "\n";
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
