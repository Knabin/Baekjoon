/*
 * 제목     ACM 호텔
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

    int T, H, W, N;
    cin >> T;

    while(T--)
    {
        // 층 개수, 방 개수, 몇 번째 손님
        cin >> H >> W >> N;
        
        int floor = N % H == 0 ? H : N % H;
        int room = ((N - 1) / H) + 1;

        cout << floor;
        if (room < 10)
        {
            cout << '0';
        }
        cout << room << '\n';
    }


    return 0;
}