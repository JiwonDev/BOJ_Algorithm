//
// Created by sylve on 2021-02-03.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    string str;
    vector<string> vec;

    cin >> str;

    for (int i = 0; i < str.size(); ++i) {
        vec.push_back(str.substr(i,str.size()-i));
    }
    sort(vec.begin(),vec.end());

    for(string s : vec)
        cout << s << "\n";
}
