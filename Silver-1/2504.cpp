/*
 * 제목     괄호의 값
 * 결과     맞았습니다!!
 * 메모리   2024 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<char> st;
    string str;
    cin >> str;

    int result = 0;
    int num = 1;

    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == '(')
        {
            num *= 2;
            st.push(str[i]);
        }
        else if (str[i] == '[')
        {
            num *= 3;
            st.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (st.empty() || st.top() != '(')
            {
                result = 0;
                break;
            }
            // 직전 괄호가 여는 괄호였다면 값을 더함
            if (str[i - 1] == '(') result += num;
            st.pop();
            num /= 2;
        }
        else if (str[i] == ']')
        {
            if (st.empty() || st.top() != '[')
            {
                result = 0;
                break;
            }
            if (str[i - 1] == '[') result += num;
            st.pop();
            num /= 3;
        }
    }

    if (!st.empty())
    {
        result = 0;
    }

    cout << result;
    
    return 0;
}