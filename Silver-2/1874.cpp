/*
 * 제목     스택 수열
 * 결과     맞았습니다!!
 * 메모리   2896 KB
 * 시간     12 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> st;
    int n, tmp, num = 1;
    string res;
    cin >> n;

    while(n--) 
    {
        cin >> tmp;
        while (num <= tmp)
        {
            st.push(num++);
            res += "+\n";
        }
        if (st.top() != tmp)
        {
            cout << "NO";
            return 0;
        }
        st.pop();
        res += "-\n";
    }

    cout << res;

    return 0;
}