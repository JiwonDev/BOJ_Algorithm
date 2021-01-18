//
// Created by sylve on 2021-01-18.
//

#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(void){
    int n;
    cin >> n;
    cin.clear();

    string s;
    int count;
    while(getline(cin,s)) {
        if(s.empty())
            continue;
        count = 0;
        for (int j = 0; j < s.size(); ++j) {
            if(s[j] == (char) '(')
                ++count;
            else if (s[j] == (char) ')')
                --count;

            if(count < 0)
                break;
        }
        if(count == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}