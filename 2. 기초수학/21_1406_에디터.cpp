//
// Created by sylve on 2021-02-04.
//
#include <cstdio>
#include <string>
#include <iostream>
#include <list>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;
    char command, x;
    list<char> input;

    cin >> str >> n;
    for(char c : str)
        input.push_back(c);

    auto cursor = input.end();

    for(int i = 0; i < n; i++){
        cin >> command;
        if(command == 'P'){
            cin >> x;
            input.insert(cursor, x);
        }else if(command == 'L'){
            if(cursor != input.begin()) cursor--;
        }else if(command == 'D'){
            if(cursor != input.end()) cursor++;
        }else if(command == 'B'){
            if(cursor != input.begin()){
                cursor--;
                cursor = input.erase(cursor);
            }
        }
    }
    for(char c : input) cout << c;
    return 0;
}

