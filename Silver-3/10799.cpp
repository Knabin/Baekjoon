/*
 * 제목     쇠막대기
 * 결과     맞았습니다!!
 * 메모리   2300 KB
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
    string input;
    cin >> input;

    long long result = 0;

    for (int index = 0; index < input.length(); ++index)
    {
        if (input[index] == '(')
        {
            st.push(input[index]);
        }
        // ) case
        else
        {
            // 레이저일 경우
            if (input[index - 1] == '(')
            {
                // 막대인 줄 알고 추가했으니 하나 pop
                st.pop();
                result += st.size();
            }
            // 막대의 끝인 경우
            else
            {
                // 막대의 갯수를 감소시킨다
                st.pop();
                result += 1;
            }
        }
    }

    cout << result;
    
    return 0;
}