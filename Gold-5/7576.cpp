/*
 * 제목     토마토
 * 결과     맞았습니다!!
 * 메모리   14016 KB
 * 시간     88 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int board[1002][1002]{ 0 };
    int dist[1002][1002]{ 0 };
    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, 1, 0, -1 };

    queue<pair<int, int>> Q;

    int m, n;
    cin >> m >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> board[i][j];

            if (board[i][j] == 1)
                Q.push({i, j});
            else if (board[i][j] == 0)
                dist[i][j] = -1;
        }
    }

    while (!Q.empty())
    {
        auto cur = Q.front(); Q.pop();
        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (dist[nx][ny] >= 0) continue;
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            Q.push({nx, ny});
        }
    }

    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (dist[i][j] == -1) 
            {
                cout << -1;
                return 0;
            }
            result = max(result, dist[i][j]);
        }
    }

    cout << result;

    return 0;
}