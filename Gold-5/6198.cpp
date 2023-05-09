/*
 * 제목     옥상 정원 꾸미기
 * 결과     맞았습니다!!
 * 메모리   2416 KB
 * 시간     8 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> s;
    long long height, ans = 0;

    int cnt;
    cin >> cnt;

    for (int i = 0; i < cnt; ++i) {
        cin >> height;
        while(!s.empty() && s.top() <= height) {
            s.pop();
        }
        ans += s.size();
        s.push(height);
    }

    cout << ans;

    return 0;
}