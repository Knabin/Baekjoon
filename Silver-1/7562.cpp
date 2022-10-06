/*
 * 제목     나이트의 이동
 * 결과     맞았습니다!!
 * 메모리   2508 KB
 * 시간     44 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int dist[302][302]{ 0 };
int l, x, y, xx, yy;
int dx[8] = { 2, 1, -1, -2, 2, 1, -1, -2 };
int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

void BFS(int x, int y)
{
    queue<pair<int, int>> Q;
    dist[x][y] = 0;
    Q.push({x, y});

    while(!Q.empty())
    {
        auto cursor = Q.front(); Q.pop();
        for (int dir = 0; dir < 8; ++dir)
        {
            int nx = cursor.first + dx[dir];
            int ny = cursor.second + dy[dir];
            if (nx < 0 || ny < 0 || nx >= l || ny >= l) continue;
            if (dist[nx][ny] >= 0) continue;
            dist[nx][ny] = dist[cursor.first][cursor.second] + 1;
            Q.push({nx, ny});
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--)
    {
        cin >> l;
        
        for (int i = 0; i < l; ++i)
        {
            fill(dist[i], dist[i] + l, -1);
        }

        cin >> x >> y >> xx >> yy;

        BFS(x, y);

        cout << dist[xx][yy] << '\n';
    }


    return 0;
}