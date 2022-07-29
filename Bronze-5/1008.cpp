/*
 * 제목     A/B
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

    int a, b;
    cin >> a >> b;

    cout.precision(10);
    cout << static_cast<double>(a) / b;

    return 0;
}