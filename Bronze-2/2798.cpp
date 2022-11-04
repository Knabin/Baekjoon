/*
 * 제목     블랙잭
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int res = INT_MIN;

    vector<int> vInt;
    vInt.resize(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> vInt[i];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (int sum = vInt[i] + vInt[j] + vInt[k]; sum == m)
                {
                    cout << m;
                    return 0;
                }
                else if (sum < m)
                {
                    // m이랑 가까운 값
                    res = max(res, sum);
                }
            }
        }
    }

    cout << res;

    return 0;
}