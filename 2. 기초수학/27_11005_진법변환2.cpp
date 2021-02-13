//
// Created by sylve on 2021-02-13.
//

#include<iostream>
using namespace std;

int main() {
    int a, b;
    int arr[100];
    int i = 0;
    cin >> a >> b;

    while (a != 0) {
        arr[i] = a % b;
        a = a / b;
        i++;
    }

    int count = i-1;
    char alpha = 'A';

    for (count; count >= 0; count--){
        if (arr[count] >= 10) {
            for (int j = 10; j <= 35; j++) { // 10~35 , A~Z
                if (arr[count] == j) cout << alpha;
                alpha++;
            }
        }
        else cout << arr[count];
        alpha = 'A';
    }

    return 0;
}
