#include<iostream>
#include<vector>
#include<string>

using namespace std;

/*
 * 앞에서 부터 숫자를 하나씩 고정시켜본다.
 * n이 5일때 찾는 순서(k, target_count)가 8이라면
 *
 * '1' +4 : +7개 (7개)
 * '2' +3 : +4개 (13개) --> 여기서부터 찾으면 된다.
 * '3' +2 : +2개 (15개)
 *
 * 앞에 7개를 더하고
 * 숫자 '2'를 고정시켜
 * n = 3 으로 만들고, 다시 처음부터 반복하면 된다.
 * 이렇게 n을 0까지 줄여나간다.
 */

void solution(int n, int target_count) {
    vector<int> answer;
    vector<int> dp = {1, 1, 2, 4}; // 계산상의 편의를 위해 0번쨰는 제외.

    int current = 0;
    int sum = 0;

    // 각 숫자별 경우의 수를 미리 구함.
    for (int i = 4; i <= n; ++i)
        dp.push_back(dp[i - 1] + dp[i - 2] + dp[i - 3]);

    // 찾는 순서가 전체 경우의 수를 넘은 경우 바로 -1
    if (target_count > dp[n])
        cout << "-1";
    else {
        while (n > 0) {
            sum = 0;
            for (int i = 1; i <= 3; ++i) {
                current = i;
                // count를 초과한 경우 이전 current를 사용하기위해 break함.
                if (sum + dp[n - i] >= target_count)
                    break;
                sum += dp[n - i];
            }

            answer.push_back(current);

            // 해당 숫자(1 or 2 or 3)를 고정시키고 그 숫자 만큼의 경우의 수를 k에 미리 빼둔다.
            target_count -= sum;

            // 고정시킨 수(1 or 2 or 3)을 n에서 빼주고 n==0이 될 때 까지 반복한다.
            // 찾는 순서(target_count)가 너무 커서 존재하지 않는 경우는 위에 예외처리하였음.
            n -= current;
        }

        for (int i = 0; i < answer.size() - 1; ++i) {
            cout << answer[i] << "+";
        }

        cout << answer[answer.size() - 1];
    }

}

int main() {
    int n, k;

    cin >> n >> k;

    solution(n, k);
}