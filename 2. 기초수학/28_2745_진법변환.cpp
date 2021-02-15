//
// Created by sylve on 2021-02-15.
//

#include <iostream>
#include <string>

using namespace std;

string input;
int b, result;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> input >> b;
    int exponent = 1;

    for (int i = input.size() - 1; i >= 0; i--)
    {
        int n;
        if (input[i] >= '0' && input[i] <= '9') n = input[i] - '0';
        else n = input[i] - 'A' + 10;

        n *= exponent;
        result += n;
        exponent *= b;
    }

    cout << result;

    return 0;
}

