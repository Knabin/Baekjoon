/*
 * 제목     팰린드롬 만들기
 * 결과     맞았습니다!!
 * 메모리   2024 KB
 * 시간     0 ms
 * 언어     C++17
 */
//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input, res;
    cin >> input;

    int cnt[200];
    int flag = 0;
    char mid;

    for (const auto& s : input) cnt[s]++;

    for (int i = 'Z'; i >= 'A'; --i)
    {
        if (cnt[i] != 0)
        {
            if (cnt[i] & 1)
            {
                mid = char(i);
                flag++;
                cnt[i]--;
            }
            // 홀수는 한 개여야만 한다.
            if (flag == 2) break;

            for (int j = 0; j < cnt[i]; j += 2)
            {
                res = char(i) + res;
                res += char(i);
            }
        }
    }

    if (mid) res.insert(res.begin() + res.size() / 2, mid);
    if (flag == 2) cout << "I'm Sorry Hansoo\n";
    else cout << res << "\n";

    return 0;
}