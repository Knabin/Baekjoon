/*
 * 제목     부녀회장이 될테야
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int apart[15][15]{ 0 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, k, n;
    cin >> T;

    // 0층 처리
    for (int i = 1; i <= 14; ++i) apart[0][i] = i;

    for (int i = 1; i <= 14; ++i) 
    {
        for (int j = 1; j <= 14; ++j) 
        {
            apart[i][j] = apart[i - 1][j] + apart[i][j - 1];
        }
    }

    while(T--)
    {
        cin >> k >> n;

        cout << apart[k][n] << '\n';
    }

    return 0;
}