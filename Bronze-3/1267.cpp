/*
 * 제목     핸드폰 요금
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

    int cnt, input, Y = 0, M = 0;
    cin >> cnt;

    for (int i = 0; i < cnt; ++i) {
        cin >> input;
        Y += (input / 30 + 1) * 10;
        M += (input / 60 + 1) * 15;
    }

    if (Y == M) {
        cout << "Y M " << Y;
    } else if (Y < M) {
        cout << "Y " << Y;
    } else {
        cout << "M " << M;
    }

    return 0;
}