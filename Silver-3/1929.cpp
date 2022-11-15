/*
 * 제목     소수 구하기
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     184 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; ++i)
    {
        if (isPrime(i))
        {
            cout << i << '\n';
        }
    }

    return 0;
}