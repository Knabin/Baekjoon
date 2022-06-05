/*
 * 제목     일곱 난쟁이
 * 결과     맞았습니다!!
 * 메모리   2024 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int alpha[26]{0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    cin >> input;

    for (const auto& i : input)
    {
        alpha[i - 'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        cout << alpha[i] << ' ';
    }

    return 0;
}