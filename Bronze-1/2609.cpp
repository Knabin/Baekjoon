/*
 * 제목     최대공약수와 최소공배수
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int getGcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return getGcd(b, a % b);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int gcd = getGcd(n, m);
    int lcm = (n * m) / gcd;

    cout << gcd << '\n' << lcm;

    return 0;
}