#include<iostream>
#include<vector>
#include<string>

using namespace std;

/*
 * �տ��� ���� ���ڸ� �ϳ��� �������Ѻ���.
 * n�� 5�϶� ã�� ����(k, target_count)�� 8�̶��
 *
 * '1' +4 : +7�� (7��)
 * '2' +3 : +4�� (13��) --> ���⼭���� ã���� �ȴ�.
 * '3' +2 : +2�� (15��)
 *
 * �տ� 7���� ���ϰ�
 * ���� '2'�� ��������
 * n = 3 ���� �����, �ٽ� ó������ �ݺ��ϸ� �ȴ�.
 * �̷��� n�� 0���� �ٿ�������.
 */

void solution(int n, int target_count) {
    vector<int> answer;
    vector<int> dp = {1, 1, 2, 4}; // ������ ���Ǹ� ���� 0������ ����.

    int current = 0;
    int sum = 0;

    // �� ���ں� ����� ���� �̸� ����.
    for (int i = 4; i <= n; ++i)
        dp.push_back(dp[i - 1] + dp[i - 2] + dp[i - 3]);

    // ã�� ������ ��ü ����� ���� ���� ��� �ٷ� -1
    if (target_count > dp[n])
        cout << "-1";
    else {
        while (n > 0) {
            sum = 0;
            for (int i = 1; i <= 3; ++i) {
                current = i;
                // count�� �ʰ��� ��� ���� current�� ����ϱ����� break��.
                if (sum + dp[n - i] >= target_count)
                    break;
                sum += dp[n - i];
            }

            answer.push_back(current);

            // �ش� ����(1 or 2 or 3)�� ������Ű�� �� ���� ��ŭ�� ����� ���� k�� �̸� ���д�.
            target_count -= sum;

            // ������Ų ��(1 or 2 or 3)�� n���� ���ְ� n==0�� �� �� ���� �ݺ��Ѵ�.
            // ã�� ����(target_count)�� �ʹ� Ŀ�� �������� �ʴ� ���� ���� ����ó���Ͽ���.
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