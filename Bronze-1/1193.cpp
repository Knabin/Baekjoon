/*
 * 제목     분수찾기
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

    int n, cnt = 1;
    cin >> n;

    while (n > cnt) 
    {
        n -= cnt;
        cnt++;
    }

	if (cnt % 2 == 1)
    {
		cout << cnt + 1 - n << '/' << n << "\n";
    }
    else
    {
		cout << n << '/' << cnt + 1 - n << "\n";
    }

    return 0;
}