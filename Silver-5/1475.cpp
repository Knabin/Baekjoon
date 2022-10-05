/*
 * 제목     방 번호
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

    int cnt[10]{ 0 };
    int max = INT_MIN;

    string input;
    cin >> input;

    for (int i = 0; i < input.length(); ++i)
    {
        ++cnt[input[i] - '0'];
    }

    for (int i = 0; i < 10; ++i)
    {
        if (i == 6 || i == 9) continue;
        if (cnt[i] > max) max = cnt[i];
    }

    max = std::max(max, (cnt[6] + cnt[9] + 1) / 2);

    cout << max;
    
    return 0;
}