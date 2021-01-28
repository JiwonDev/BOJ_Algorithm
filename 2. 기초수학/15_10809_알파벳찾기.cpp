//
// Created by sylve on 2021-01-28.
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

    for(int& i:alpha)
        i = -1;

    for (int i = 0; i < str.size(); ++i) {
        if(str[i] >= 'a' && str[i] <= 'z')
            if(alpha[str[i]-'a'] < 0)
                alpha[str[i]-'a'] = i;
    }

    for(int i:alpha)
        cout << i << " ";

    return 0;
}

