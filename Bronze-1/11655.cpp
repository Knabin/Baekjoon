/*
 * 제목     ROT13
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

    string input;
    getline(cin, input);

    for (auto& ch : input)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch + 13 > 'z') ch = ch + 13 - 26;
            else ch += 13;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            if (ch + 13 > 'Z') ch = ch + 13 - 26;
            else ch += 13;
        }
    }

    cout << input;

    return 0;
}