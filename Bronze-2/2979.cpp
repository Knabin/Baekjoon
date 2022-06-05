/*
 * 제목     트럭 주차
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int hours[101];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int c[4]{0};
    int res = 0;
    cin >> c[1] >> c[2] >> c[3];

    for (int i = 0; i < 3; ++i)
    {
        int start, end;
        cin >> start >> end;

        for (int j = start; j < end; ++j) hours[j]++;
    }

    for (int i = 1; i <= 100; ++i)
    {
        res += hours[i] * c[hours[i]];
    }

    cout << res;

    return 0;
}