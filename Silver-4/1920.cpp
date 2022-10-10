/*
 * 제목     수 찾기
 * 결과     맞았습니다!!
 * 메모리   6776 KB
 * 시간     92 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<int> um;

    int N, M, tmp;
    cin >> N;

    while (N--)
    {
        cin >> tmp;
        um.insert(tmp);
    }

    cin >> M;

    while (M--)
    {
        cin >> tmp;
        cout << (um.find(tmp) != um.end()) << '\n';
    }
    
    return 0;
}