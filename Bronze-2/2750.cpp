/*
 * 제목     수 정렬하기
 * 결과     맞았습니다!!
 * 메모리   2156 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<int> sInt;

    int n, tmp;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;
        sInt.insert(tmp);
    }

    for (const auto& num : sInt)
    {
        cout << num << '\n';
    }
    
    return 0;
}