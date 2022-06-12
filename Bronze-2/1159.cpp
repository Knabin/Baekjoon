/*
 * 제목     농구 경기
 * 결과     맞았습니다!!
 * 메모리   2024 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int cnt[26]{0};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string temp;
        cin >> temp;
        cnt[temp[0] - 'a']++;
    }

    string res;
    for (int i = 0; i < 26; ++i)
    {
        if (cnt[i] >= 5) res += 'a' + i;
    }

    cout << (res.empty() ? "PREDAJA" : res);

    return 0;
}