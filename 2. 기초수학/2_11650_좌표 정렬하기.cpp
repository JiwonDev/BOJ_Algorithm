//
// Created by sylve on 2021-01-06.
//

#include <algorithm>
#include<iostream>
#include <vector>
using namespace std;

struct coordinate{
    int x;
    int y;
};

bool compare (coordinate i, coordinate j) {
    if(i.x == j.x)
        return (i.y < j.y);
    else
        return (i.x < j.x);
}

int main(){
    int n, temp;
    cin >> n;

    vector<coordinate> arr;
    int a,b;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        arr.push_back({a,b});
    }
    sort(arr.begin(),arr.end(),compare);
    for(coordinate i:arr)
        cout << i.x << " " << i.y << "\n";
}