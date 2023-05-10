/*
 * 제목     오아시스 재결합
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     72 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<pair<int, int>> s;
    int n, height;
    cin >> n;

    long long ans = 0;

    for (int i = 0; i < n; ++i) {
        cin >> height;
        int cnt = 1;

        // top보다 큰 키가 나타난 경우
        while(!s.empty() && s.top().first <= height) {
            // 일단 쌍을 이뤄 줌 (1이 증가)
            ans += s.top().second;
            // 같다면 해당하는 인원 증가 (second)
            if (s.top().first == height) cnt += s.top().second;
            // 가려질 테니 더 이상은 의미가 없음
            s.pop();
        }

        // 작은 상대와 나머지 쌍을 이룸
        if (!s.empty()) ans++;
        s.push(make_pair(height, cnt));
    }

    cout << ans;

    return 0;
}