/*
 * 제목     별 찍기 - 6
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

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << ' ';
        }
        for (int k = 0; k < n - i; ++k) {
            cout << '*';
        }
        for (int l = 0; l < n - i - 1; ++l) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}