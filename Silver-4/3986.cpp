/*
 * 제목     좋은 단어
 * 결과     맞았습니다!!
 * 메모리   2392 KB
 * 시간     4 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    int n, cnt = 0;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        stack<char> st;

        cin >> input;
        for (const auto& in : input) 
        {
            if (st.empty() == false && st.top() == in) st.pop();
            else st.push(in);
        }

        if (st.empty()) cnt++;
    }

    cout << cnt;

    return 0;
}