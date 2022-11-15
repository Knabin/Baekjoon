/*
 * 제목     Hashing
 * 결과     맞았습니다!! (100점)
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

    const int r = 31;
    const int M = 1234567891;

    int L, cnt = 0;
    unsigned long res = 0;
    cin >> L;

    char input;

    while(L--)
    {
        cin >> input;
        unsigned long value = input - 'a' + 1;
        unsigned long v = value;

        for (int i = 0; i < cnt; ++i)
        {
            v = (v * r) % M;
        }

        res = (res + v) % M;

        cnt++;
    }

    cout << res;


    return 0;
}