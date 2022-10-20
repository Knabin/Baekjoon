/*
 * 제목     대소문자 바꾸기
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
    cin >> input;

    char gap = 'a' - 'A';

    for (auto& ch : input)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch -= gap;
        }
        else
        {
            ch += gap;
        }
    }

    cout << input;

    return 0;
}