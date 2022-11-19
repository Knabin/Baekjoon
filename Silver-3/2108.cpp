/*
 * 제목     통계학
 * 결과     맞았습니다!!
 * 메모리   4544 KB
 * 시간     132 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> vInt;
    map<int, int> mInt;

    int N, sum = 0;
    cin >> N;

    vInt.resize(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> vInt[i];
        sum += vInt[i];

        mInt[vInt[i]]++;
    }

    sort(vInt.begin(), vInt.end());

    // 산술평균
    cout << floor((double)sum / N + 0.5) << '\n';

    // 중앙값
    cout << vInt[N / 2] << '\n';

    // 최빈값
    vector<pair<int, int>> vTemp{mInt.begin(), mInt.end()};
    sort(vTemp.begin(), vTemp.end(), [=](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) return a.first < b.first;
        return a.second > b.second;
    });

    // 원소가 하나라면
    if (vTemp.size() == 1)
    {
        cout << vTemp[0].first << '\n';
    }
    else if(vTemp[0].second == vTemp[1].second)
    {
        cout << vTemp[1].first << '\n';
    }
    else
    {
        cout << vTemp[0].first << '\n';
    }

    // 범위
    cout << prev(mInt.end())->first - mInt.begin()->first;

    return 0;
}