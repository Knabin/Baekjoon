/*
 * 제목     요세푸스 문제
 * 결과     맞았습니다!!
 * 메모리   2156 KB
 * 시간     48 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> vInt;
    int prev[5001]{ 0 };
    int next[5001]{ 0 };

    int n, k, i = 1, length = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
    {
        prev[i] = (i == 1) ? n : i - 1;
        next[i] = (i == n) ? 1 : i + 1;
        length++;
    }

    for (int cursor = 1; length != 0; cursor = next[cursor])
    {
        // K번째일 때 제거
        if (i == k)
        {
            prev[next[cursor]] = prev[cursor];
            next[prev[cursor]] = next[cursor];
            vInt.push_back(cursor);
            
            i = 1;
            --length;
        }
        else
        {
            ++i;
        }
    }

    cout << '<';
    for (int i = 0; i < vInt.size(); ++i)
    {
        cout << vInt[i];
        if (i != vInt.size() - 1) cout << ", ";
    }
    cout << '>';
    
    return 0;
}