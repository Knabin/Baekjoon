/*
 * 제목     벌집
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

    int n;
    cin >> n;

    long long endValue = 1;
    long long cnt = 0;

    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    for (long long i = 0; n > endValue; ++i)
    {
        endValue += i * 6;
        cnt++;
    }

    cout << cnt;

    return 0;
}