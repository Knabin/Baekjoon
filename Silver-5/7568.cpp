/*
 * 제목     덩치
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

    vector<pair<int, int>> vPair;

    int N, x, y, rank = 1;
    cin >> N;

    while(N--)
    {
        cin >> x >> y;
        vPair.push_back(make_pair(x, y));
    }

    for (int i = 0; i < vPair.size(); ++i)
    {
        for (int j = 0; j < vPair.size(); ++j)
        {
            if (vPair[i].first < vPair[j].first && vPair[i].second < vPair[j].second)
            {
                ++rank;
            }
        }

        cout << rank << ' ';
        rank = 1;
    }

    return 0;
}