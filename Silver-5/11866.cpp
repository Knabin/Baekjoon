/*
 * 제목     요세푸스 문제 0
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

    int n, k, cnt = 1;
    cin >> n >> k;

    queue<int> qInt;

    for (int i = 1; i <= n; ++i)
    {
        qInt.push(i);
    }

    cout << '<';

    while(!qInt.empty())
    {
        if (cnt == k)
        {
            auto f = qInt.front();
            qInt.pop();
            cout << f << (qInt.empty() ? "" : ", ");
            cnt = 1;
            continue;
        }
        qInt.push(qInt.front());
        qInt.pop();
        cnt++;
    }

    cout << '>';

    return 0;
}