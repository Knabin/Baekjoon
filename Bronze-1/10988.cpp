/*
 * 제목     팰린드롬인지 확인하기
 * 결과     맞았습니다!!
 * 메모리   2024 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input, temp;
    cin >> input;

    temp = input;

    reverse(temp.begin(), temp.end());

    if (temp == input) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}