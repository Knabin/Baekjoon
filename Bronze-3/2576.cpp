/*
 * 제목     홀수
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

    int sum = 0;
    int min = INT_MAX;
    int input;

    for (int i = 0; i < 7; ++i) {
        cin >> input;
        if (input % 2 == 1) {
            sum += input;
            if (input < min) min = input;
        }
    }

    if (sum == 0 && min == INT_MAX) {
        cout << -1;
    } else {
        cout << sum << '\n' << min;
    }

    return 0;
}