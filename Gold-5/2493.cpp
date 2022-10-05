/*
 * 제목     탑
 * 결과     맞았습니다!!
 * 메모리   6300 KB
 * 시간     100 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<pair<int, int>> tower;
    int N;
    cin >> N;

    tower.push({100000001, 0});
    for (int i = 1; i <= N; ++i)
    {
        int height;
        cin >> height;

        while (tower.top().first < height)
        {
            tower.pop();
        }
        cout << tower.top().second << ' ';
        tower.push({height, i});
    }

    return 0;
}