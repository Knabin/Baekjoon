/*
 * 제목     분해합
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     8 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, res = 0;
    cin >> n;

    for (int i = 1; i < n; ++i)
    {
        int tmp = i;
        int sum = i;

        while(tmp > 0)
        {
            sum += tmp % 10;
            tmp /= 10;
        }

        if (sum == n) 
        {
            res = i;
            break;
        }
    }

    cout << res;

    return 0;
}