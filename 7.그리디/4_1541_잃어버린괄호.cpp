//
// Created by sylve on 2021-03-07.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int answer = 0;
    bool minus = false;
    string number = "";
    string inputString;

    cin >> inputString;
    // ù - ���� ���� �� ���ָ� �ȴ�. �� ������ ��ȯ �԰���
    // 1. ���̳ʽ� ���� ����� ���� ��� 10 -(20+40+30)
    // 2. ���̳ʽ� ���� ������ ���� ��� 10 -20-(30+40)-20-(20+30)
    for (int i = 0; i <= inputString.size(); ++i){
        if (inputString[i] == '+' || inputString[i] == '-' || inputString[i] == '\0'){
            if (minus)
                answer -= stoi(number);
            else
                answer += stoi(number);
            number = "";

            if (inputString[i] == '-')
                minus = true;

        } else
            number += inputString[i];
    }

    cout << answer << endl;

    return 0;
}