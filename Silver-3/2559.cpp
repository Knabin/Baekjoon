/*
 * 제목     수열
 * 결과     맞았습니다!!
 * 메모리   2288 KB
 * 시간     8 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, res = INT_MIN;
    int psum[100001];

    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
    {
        int temp;
        cin >> temp;
        psum[i] = psum[i - 1] + temp;
    }

    for (int i = k; i <= n; ++i)
    {
        res = max(res, psum[i] - psum[i - k]);
    }

    cout << res << endl;

    return 0;
}