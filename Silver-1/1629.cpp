/*
 * 제목     곱셈
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

long long a, b, c;

ll go(ll a, ll b)
{
    if (b == 1) return a % c;

    // 반으로 쪼개서 곱한다!
    ll temp = go(a, b / 2);
    temp = (temp * temp) % c;
    
    // b % 2 == b & 1
    if (b % 2) temp = (temp * a) % c;
    return temp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b >> c;
    cout << go(a, b);

    return 0;
}