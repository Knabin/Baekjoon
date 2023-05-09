/*
 * 제목     프린터 큐
 * 결과     맞았습니다!!
 * 메모리   2024 KB
 * 시간     4 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int c, n, m, d;
    cin >> c;

    while(c--) {
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        cin >> n >> m;

        for (int i = 0; i < n; ++i) {
            cin >> d;
            q.push(make_pair(i, d));
            pq.push(d);
        }

        int cnt = 0;
        while(!q.empty()) {
            if (pq.top() == q.front().second) {
                pq.pop();
                cnt++;

                if (q.front().first == m) {
                    cout << cnt << endl;
                    break;
                }
                q.pop();
            }
            else {
                q.push(q.front());
                q.pop();
            }
        }
    }

    return 0;
}