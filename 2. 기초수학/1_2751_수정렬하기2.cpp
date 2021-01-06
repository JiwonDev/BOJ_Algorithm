//
// Created by sylve on 2021-01-06.
//

#include <algorithm>
#include<iostream>
#include <vector>
using namespace std;

bool compare (int i,int j) { return (i<j); }
int main(){
    int n, temp;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end(),compare);
    for(int i:arr)
        cout << i << "\n";
}

