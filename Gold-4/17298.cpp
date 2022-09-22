/*
 * 제목     오큰수
 * 결과     맞았습니다!!
 * 메모리   14120 KB
 * 시간     248 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> vInt, vRes;
    stack<int> sInt;
    int n;
    cin >> n;

    vInt.resize(n);
    vRes.resize(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> vInt[i];

        while (!sInt.empty() && vInt[sInt.top()] < vInt[i])
        {
            vRes[sInt.top()] = vInt[i];
            sInt.pop();
        }
        sInt.push(i);
    }

    for (int i = 0; i < n; ++i)
    {
        cout << (vRes[i] > 0 ? vRes[i] : -1) << " ";
    }

    return 0;
}