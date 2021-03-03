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
    if (n == 1) // 1���ΰ��
        cout << "A\n"; // ��� ���� �������� �� �� ����.

    else if (n == 2){ // 2���ΰ��
        if (num[0] == num[1])
            cout << num[1];
        else
            cout << "A\n"; // ��� ������ ����� �𸣹Ƿ� �������� ��������.

    } else {
        // �Ϲ����� �����ؼ� �˻��ؼ� ã�ƺ�.
        if (num[1] - num[0] != 0) // f(x+1) = ax+b�� �Ϲ��� ���ϴ� ���
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