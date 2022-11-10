/*
 * 제목     숫자 카드 2
 * 결과     맞았습니다!!
 * 메모리   25520 KB
 * 시간     644 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, tmp, cnt = 0;
    cin >> n;

    map<int, int> mInt;

    while(n--)
    {
        cin >> tmp;
        ++mInt[tmp];
    }

    cin >> m;

    for (int i = 0; i < m; ++i)
    {
        cin >> tmp;
        if (mInt.find(tmp) != mInt.end())
        {
            cout << mInt[tmp] << ' ';
        }
        else
        {
            cout << 0 << ' ';
        }
    }

    return 0;
}