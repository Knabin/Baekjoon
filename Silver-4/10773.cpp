/*
 * 제목     제로
 * 결과     맞았습니다!!
 * 메모리   2548 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> stInt;
    int K, tmp, res = 0;
    cin >> K;

    for (int i = 0; i < K; ++i)
    {
        cin >> tmp;
        if (tmp == 0 && !stInt.empty())
        {
            stInt.pop();
        }
        else
        {
            stInt.push(tmp);
        }
    }

    while (!stInt.empty())
    {
        res += stInt.top();
        stInt.pop();
    }

    cout << res;

    return 0;
}