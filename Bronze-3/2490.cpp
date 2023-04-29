/*
 * 제목     윷놀이
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

    char resChar[5] { 'D', 'C', 'B', 'A', 'E' };
    int input;

    for (int i = 0; i < 3; ++i) {
        int sum = 0;
        for (int j = 0; j < 4; ++j) {
            cin >> input;
            sum += input;
        }
        cout << resChar[sum] << '\n';
    }

    return 0;
}