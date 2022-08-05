/*
 * 제목     수 정렬하기 2
 * 결과     맞았습니다!!
 * 메모리   49016 KB
 * 시간     1148 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<int> sInt;
    int n, temp;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        sInt.insert(temp);
    }

    for (const auto& i : sInt)
    {
        cout << i << "\n";
    }

    return 0;
}