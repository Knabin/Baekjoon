/*
 * 제목     팩토리얼
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

    int n, res = 1;
    cin >> n;

    for (int i = n; i >= 2; --i)
    {
        res *= i;
    }

    cout << res;

    return 0;
}