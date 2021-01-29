//
// Created by sylve on 2021-01-29.
//
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main () {
    int lowers, uppers, numbers, spaces;
    string str;
    while(getline(cin, str)) {
        lowers = 0;
        uppers = 0;
        numbers = 0;
        spaces = 0;

        if (str.length() == 0) break;

        for(char c: str){
            if (isupper(c)) uppers++;
            else if (islower(c)) lowers++;
            else if (isdigit(c)) numbers++;
            else if (isspace(c)) spaces++;
        }
        printf("%d %d %d %d\n",lowers, uppers, numbers, spaces);
    }
    return 0;
}
