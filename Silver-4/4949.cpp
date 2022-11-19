/*
 * 제목     균형잡힌 세상
 * 결과     맞았습니다!!
 * 메모리   2024 KB
 * 시간     4 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

bool check(const string& str)
{
    stack<char> st;
    for (const auto& ch : str)
    {
        if (ch == '(' || ch == '[')
        {
            st.push(ch);
        }
        else if (ch == ')' || ch == ']')
        {
            if (st.empty()) return false;

            auto tmp = st.top();
            st.pop();

            if ((ch == ')' && tmp == '(') || (ch == ']' && tmp == '['))
            {
                continue;
            }
            else
            {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    while(true)
    {
        getline(cin, input);
        if (input.compare(".") == 0) break;

        cout << (check(input) == true ? "yes" : "no") << '\n';
    }

    return 0;
}