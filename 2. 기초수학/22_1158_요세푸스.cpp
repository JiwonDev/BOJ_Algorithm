//
// Created by sylve on 2021-02-06.
//

#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    int n, offset;
    int temp;
    queue<int> que;

    cin >> n >> offset;
    for (int i = 1; i <= n; ++i)
        que.push(i);

    cout << "<";
    while (true) {
        for (int i = 0; i < offset - 1; ++i) {
            temp = que.front();
            que.pop();
            que.push(temp);
        }
        printf("%d" , que.front());
        que.pop();
        if (que.size() <= 0)
            break;
        else
            printf(", ");
    }
    cout << ">";

    return 0;
}