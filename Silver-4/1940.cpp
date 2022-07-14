/*
 * 제목     주몽
 * 결과     맞았습니다!!
 * 메모리   2200 KB
 * 시간     96 ms
 * 언어     C++17
 */
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, cnt = 0;
    cin >> n >> m;
    vector<int> vInt;
    vInt.resize(n);

    for (int i = 0; i < n; ++i)
    {
      cin >> vInt[i];
    }

    sort(vInt.begin(), vInt.end());

    for (int i = 0; i < n; ++i)
    {
      for (int j = i + 1; j < n; ++j)
      {
        if (vInt[i] + vInt[j] == m) ++cnt;
      }
    }

    cout << cnt;

    return 0;
}