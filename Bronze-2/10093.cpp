/*
 * 제목     숫자
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     16 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long start, end;

    cin >> start >> end;

    if (start > end) swap(start, end);

    if (end - start <= 1) {
        cout << 0 << '\n';
    } else {
        cout << end - start - 1 << '\n';
        for (long long i = start + 1; i < end; ++i) {
            cout << i << ' ';
        }
    }

    return 0;
}