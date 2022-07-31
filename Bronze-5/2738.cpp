/*
 * 제목     행렬 덧셈
 * 결과     맞았습니다!!
 * 메모리   2176 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, temp;
    cin >> n >> m;

    vector<int> vRes;
    vRes.resize(n * m);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> temp;
            vRes[i * m + j] += temp;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> temp;
            vRes[i * m + j] += temp;

            cout << vRes[i * m + j] << " ";
        }
        cout << "\n";
    }

    return 0;
}