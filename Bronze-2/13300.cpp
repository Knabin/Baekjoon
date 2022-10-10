/*
 * 제목     방 배정
 * 결과     맞았습니다!! (100점)
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

    int n, k, res = 0;
    cin >> n >> k;

    // 여학생 1 ~ 6 / 남학생 7 ~ 12
    int cnt[15]{ 0 };

    while(n--)
    {
        int s, y;
        cin >> s >> y;
        
        ++cnt[s * 6 + y];
    }

    for (int i = 1; i <= 12; ++i)
    {
        if (cnt[i] > 0) 
        {
            res += (cnt[i] / k) + (cnt[i] % k == 0 ? 0 : 1);
        }
    }

    cout << res;

    return 0;
}