/*
 * 제목     이항 계수 1
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     0 ms
 * 언어     C++17
 */

#include <iostream>

using namespace std;

int main()
{
    int n, k, tmp = 0, res = 1;
    cin >> n >> k;

    if (k == 0)
    {
        cout << 1;
        return 0;
    }

    tmp = 0;

    while (true)
    {
        res *= (n - tmp);
        if (++tmp >= k) break;
    }

    tmp = 1;
    while (k > 0)
    {
        tmp *= k;
        k--;
    }

    cout << (res / tmp);

	return 0;
}