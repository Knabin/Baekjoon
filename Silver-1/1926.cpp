/*
 * 제목     그림
 * 결과     맞았습니다!!
 * 메모리   3128 KB
 * 시간     28 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int board[502][502]{ 0 };
    bool visited[502][502]{ 0 };
    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, 1, 0, -1 };

    int n, m, cnt = 0, mx = 0;
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> board[i][j];
        }
    }

    for (int x = 0; x < n; ++x)
    {
        for (int y = 0; y < m; ++y)
        {
            // 색칠이 안 된 곳이거나, 이미 방문했다면 스킵
            if (board[x][y] == 0 || visited[x][y]) continue;
            // 그림의 숫자 증가
            cnt++;

            queue<pair<int, int>> Q;
            visited[x][y] = true;

            Q.push({x, y});

            int area = 0;

            while (!Q.empty())
            {
                area++;
                auto cur = Q.front(); Q.pop();

                for (int dir = 0; dir < 4; ++dir)
                {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    // 맵 밖을 벗어날 경우 스킵
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    // 이미 방문한 칸이거나, 색칠되어 있지 않은 칸은 스킵
                    if (visited[nx][ny] || board[nx][ny] != 1) continue;
                    visited[nx][ny] = true;
                    Q.push({nx, ny});
                }
            }

            mx = max(mx, area);
        }
    }

    cout << cnt << '\n' << mx;

    return 0;
}