/*
 * 제목     적록색약
 * 결과     맞았습니다!!
 * 메모리   2040 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

char board[102][102]{ 0 };
bool visited[102][102]{ 0 };
int n;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void BFS(int x, int y)
{
    queue<pair<int, int>> Q;
    Q.push({x, y});
    visited[x][y] = true;

    while(!Q.empty())
    {
        auto cursor = Q.front(); Q.pop();
        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cursor.first + dx[dir];
            int ny = cursor.second + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (visited[nx][ny] == true || board[x][y] != board[nx][ny]) continue;

            visited[nx][ny] = true;
            Q.push({nx, ny});
        }
    }
}

int getArea()
{
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (!visited[i][j])
            {
                ++cnt;
                BFS(i, j);
            }
        }
    }

    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> board[i][j];
        }
    }

    cout << getArea() << ' ';

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            visited[i][j] = false;
            if (board[i][j] == 'G') board[i][j] = 'R';
        }
    }

    cout << getArea();

    return 0;
}