//
// Created by sylve on 2021-02-01.
//

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main () {
    int lowers, uppers, numbers, spaces;
    string str;

    getline(cin,str);
    for(char& c:str){
        if(isupper(c))
            if((c+13) > 'Z')
                c = 'A' + c + 13 - 'Z' - 1;
            else
                c = c + 13;
        else if(islower(c))
            if((c+13) > 'z')
                c = 'a' + c + 13 - 'z' - 1 ;
            else
                c = c + 13;
    }

    cout << str;
}