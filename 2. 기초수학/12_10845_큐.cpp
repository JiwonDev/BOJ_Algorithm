//
// Created by sylve on 2021-01-21.
//

#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main(void) {

    int n;
    cin >> n;
    queue<int> que;
    int num;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (str == "push") {
            int data;
            cin >> data;
            que.push(data);

        } else if (str == "pop") {
            if (!que.empty()) {
                num = que.front();
                que.pop();
            } else {
                num = -1;
            }
            cout << num << endl;

        } else if (str == "size") {
            cout << que.size() << endl;

        } else if (str == "empty") {
            if (que.empty()) num = 1;
            else num = 0;
            cout << num << endl;

        } else if (str == "front") {
            if (que.empty()) {
                num = -1;
            } else {
                num = que.front();
            }
            cout << num << endl;

        } else if (str == "back") {
            if (que.empty()) {
                num = -1;
            } else {
                num = que.back();
            }
            cout << num << endl;
        }
    }
    return 0;
}