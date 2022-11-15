/*
 * 제목     수 정렬하기 3
 * 결과     맞았습니다!!
 * 메모리   2552 KB
 * 시간     3064 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, int> mInt;

    int n, tmp;
    cin >> n;

    while(n--)
    {
        cin >> tmp;
        ++mInt[tmp];
    }

    for (const auto [num, cnt] : mInt)
    {
        for (int i = 0; i < cnt; ++i)
        {
            cout << num << '\n';
        }
    }

    return 0;
}