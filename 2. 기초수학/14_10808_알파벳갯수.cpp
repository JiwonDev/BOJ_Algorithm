//
// Created by sylve on 2021-01-24.
//

#include <iostream>

#include <string>

#include <deque>

using namespace std;



int main(void) {

    ios::sync_with_stdio(false);
    int alpha[26] = {0,};

    string str;
    cin >> str;

    for(char c:str)
        if(c >= 'a' && c <= 'z')
            alpha[c-'a']++;
    for(int i:alpha)
        cout << i << " ";

    return 0;
}


