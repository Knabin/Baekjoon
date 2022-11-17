/*
 * 제목     좌표 정렬하기 2
 * 결과     맞았습니다!!
 * 메모리   3688 KB
 * 시간     48 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, y;
    cin >> n;

    vector<pair<int, int>> vRes;

    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        vRes.push_back(make_pair(x, y));
    }

    sort(vRes.begin(), vRes.end(), [=](const pair<int, int> &a, const pair<int, int> &b) {
        if (a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second < b.second;
    });

    for (int i = 0; i < n; ++i)
    {
        cout << vRes[i].first << ' ' << vRes[i].second << '\n';
    }
    
    return 0;
}