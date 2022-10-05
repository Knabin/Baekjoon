/*
 * 제목     안전 영역
 * 결과     맞았습니다!!
 * 메모리   2312 KB
 * 시간     28 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };
int input[101][101], adj[101][101], visited[101][101];
int n, res = 1, tmp = 0;

void dfs(int y, int x)
{
  visited[y][x] = 1;

  for (int i = 0; i < 4; ++i)
  {
      int ny = dy[i] + y;
      int nx = dx[i] + x;

      if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
      if (!visited[ny][nx] && adj[ny][nx] == 0) dfs(ny, nx);
  }
}

int main() 
{
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> input[i][j];
        }
    }

    // 잠기는 층 계산
    for (int d = 1; d <= 100; ++d)
    {
        fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
        tmp = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (adj[i][j] == 1) continue;
                if (input[i][j] <= d) adj[i][j] = 1;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (adj[i][j] == 0 && !visited[i][j])
                {
                    dfs(i, j);
                    tmp++;
                }
            }
        }
        res = max(res, tmp);
    }

    cout << res;

    return 0;
}