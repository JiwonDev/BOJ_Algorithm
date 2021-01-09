//
// Created by sylve on 2021-01-09.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    string name;
    int kor, eng, math;
};

bool compare(const student &u, const student &v){
    if(u.kor > v.kor)
        return true;
    else if(u.kor == v.kor)
    {
        if (u.eng < v.eng)
            return true;
        else if(u.eng == v.eng){
            if (u.math > v.math)
                return true;
            else if (u.math == v.math)
                return u.name < v.name;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<student> students(n);

    for (int i = 0; i < n; i++)
        cin >> students[i].name >> students[i].kor >> students[i].eng >> students[i].math;

    sort(students.begin(), students.end(), compare);

    for (const student& s : students)
        cout << s.name << "\n";
}
