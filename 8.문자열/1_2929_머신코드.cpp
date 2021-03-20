//
// Created by sylve on 2021-03-10.
//

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int upperCount=0;
    int lowerCount=0;
    string inputs;
    cin >> inputs;

    for (int i = 0; i < inputs.size(); i++)
        if(isupper(inputs[i]))
            upperCount++;
        else if(islower(inputs[i]))
            lowerCount++;

    int last = inputs.size() - 1;
    while(islower(inputs[last])){
        last--;
        lowerCount--;
    }
    upperCount--; // 마지막 대문자는 생략가능

    cout << (upperCount * 3) - lowerCount << endl;

    return 0;
}