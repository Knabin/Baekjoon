/*
 * 제목     대표값2
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

    // 평균
    // sort 해서 중간값

    vector<int> vInput;
    vInput.resize(5);

    int sum = 0;

    for (int i = 0; i < 5; ++i) {
        cin >> vInput[i];
        sum += vInput[i];
    }

    sort(vInput.begin(), vInput.end());

    cout << sum / 5 << '\n';
    cout << vInput[2];

    return 0;
}