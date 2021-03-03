#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void input(int &n, int num[]){
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i];
}

void solution(int &n, int num[]){
    int answer = 0;
    int a=0,b=0; // ax+b
    if (n == 1) // 1개인경우
        cout << "A\n"; // 모든 수가 다음수가 될 수 있음.

    else if (n == 2){ // 2개인경우
        if (num[0] == num[1])
            cout << num[1];
        else
            cout << "A\n"; // 어떠한 계산식을 썼는지 모르므로 다음수가 여러개임.

    } else {
        // 일반항을 못구해서 검색해서 찾아봄.
        if (num[1] - num[0] != 0) // f(x+1) = ax+b의 일반항 구하는 방법
            a = (num[2] - num[1]) / (num[1] - num[0]);
        b = num[1] - num[0] * a;

        for (int i = 1; i < n; i++){
            if (num[i] != num[i - 1] * a + b){
                cout << "B\n";
                return;
            }
        }

        cout << a * num[n - 1] + b;
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, num[50];
    input(n,num);
    solution(n,num);

    return 0;
}