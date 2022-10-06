/*
 * 제목     불
 * 결과     맞았습니다!!
 * 메모리   15928 KB
 * 시간     96 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int board[1002][1002]{ 0 };
int visited[1002][1002]{ 0 };
int fire[1002][1002]{ 0 };
int w, h;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char input;
    int tc;
    cin >> tc;

    while(tc--)
    {
        queue<pair<int, int>> vQ, fQ;
        bool escape = false;

        cin >> h >> w;

        for (int i = 0; i < w; ++i)
        {
            for (int j = 0; j < h; ++j)
            {
                visited[i][j] = 0;
                fire[i][j] = 0;

                cin >> input;

                if (input == '#')
                {
                    board[i][j] = -1;
                }
                else {
                    if (input == '@')
                    {
                        vQ.push({i, j});
                        visited[i][j] = 1;
                    }
                    else if (input == '*')
                    {
                        fQ.push({i, j});
                        fire[i][j] = 1;
                    }
                    board[i][j] = 0;
                }
            }
        }

        while(!fQ.empty())
        {
            auto cursor = fQ.front(); fQ.pop();
            for (int dir = 0; dir < 4; ++dir)
            {
                int nx = cursor.first + dx[dir];
                int ny = cursor.second + dy[dir];

                if (nx < 0 || ny < 0 || nx >= w || ny >= h) continue;
                if (board[nx][ny] == -1 || fire[nx][ny]) continue;

                fire[nx][ny] = fire[cursor.first][cursor.second] + 1;
                fQ.push({nx, ny});
            }
        }

        while((!vQ.empty()) && (!escape))
        {
            auto cursor = vQ.front(); vQ.pop();
            for (int dir = 0; dir < 4; ++dir)
            {
                int nx = cursor.first + dx[dir];
                int ny = cursor.second + dy[dir];

                if (nx < 0 || ny < 0 || nx >= w || ny >= h)
                {
                    cout << visited[cursor.first][cursor.second] << '\n';
                    escape = true;
                    break;
                }
                if (board[nx][ny] == -1 || visited[nx][ny]) continue;
                if (fire[nx][ny] != 0 && fire[nx][ny] <= visited[cursor.first][cursor.second] + 1) continue;
                visited[nx][ny] = visited[cursor.first][cursor.second] + 1;
                vQ.push({nx, ny});
            }
        }

        if (!escape) cout << "IMPOSSIBLE" << '\n';
    }

    return 0;
}