//
// Created by sylve on 2021-01-08.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool compare (pair<int, string> u, pair<int, string> v)
{
    return u.first < v.first;
}

int main()
{
    int T;
    cin >> T;

    vector<pair<int, string>> persons(T);

    for (int i = 0; i < T; i++)
        cin >> persons[i].first >> persons[i].second;

    stable_sort(persons.begin(), persons.end(), compare);

    for (int i = 0; i < T; i++)
        cout << persons[i].first << " " << persons[i].second << "\n";
}