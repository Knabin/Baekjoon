/*
 * 제목     개수 세기
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

    int n, tmp;
    cin >> n;

    int cnt[201]{ 0 };

    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        ++cnt[tmp + 100];
    }

    cin >> tmp;

    cout << cnt[tmp + 100];

    return 0;
}