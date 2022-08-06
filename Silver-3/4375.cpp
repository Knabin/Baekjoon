/*
 * 제목     1
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

    int n;

    while (cin >> n)
    {
        int cnt = 1, ret = 1;

        while (true)
        {
            if (cnt % n == 0)
            {
                cout << ret << '\n';
                break;
            }
            else
            {
                cnt = (cnt * 10) + 1;
                cnt %= n;
                ret++;
            }
        }
    }

    return 0;
}