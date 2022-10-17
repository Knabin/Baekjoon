/*
 * 제목     과제 안 내신 분..?
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

    bool cnt[32]{ false };
    int input;

    for (int i = 0; i < 28; ++i)
    {
        cin >> input;
        cnt[input] = true;
    }

    for (int i = 1; i <= 30; ++i)
    {
        if (cnt[i] == false)
        {
            cout << i << '\n';
        }
    }

    return 0;
}