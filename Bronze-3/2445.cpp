/*
 * 제목     별 찍기 - 8
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

    for (int i = 1; i <= n; ++i) {
        for (int j = i; j > 0; --j) {
            cout << '*';
        }
        for (int k = 2 * (n - i); k > 0; --k) {
            cout << ' ';
        }
        for (int l = i; l > 0; --l) {
            cout << '*';
        }
        cout << '\n';
    }

    for (int i = n - 1; i > 0; --i) {
        for (int j = i; j > 0; --j) {
            cout << '*';
        }
        for (int k = 2 * (n - i); k > 0; --k) {
            cout << ' ';
        }
        for (int l = i; l > 0; --l) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}