//
// Created by sylve on 2021-02-02.
//

#include <iostream>
#include <string>

using namespace std;

int main () {
    string a,b,c,d;
    cin >> a >> b >> c >> d;
    long long int result = stoll(a+b) + stoll(c+d);
    cout << result << endl;
}

