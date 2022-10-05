/*
 * 제목     큐 2
 * 결과     맞았습니다!!
 * 메모리   10424 KB
 * 시간     388 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;
    int N, tmp;
    cin >> N;

    string input;

    while(N--)
    {
        cin >> input;

        if (input == "push")
        {
            cin >> tmp;
            q.push(tmp);
        }
        else if (input == "pop")
        {
            if (q.empty()) cout << -1 << '\n';
            else 
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (input == "front")
        {
            if (q.empty()) cout << -1 << '\n';
            else 
            {
                cout << q.front() << '\n';
            }
        }
        else if (input == "back")
        {
            if (q.empty()) cout << -1 << '\n';
            else 
            {
                cout << q.back() << '\n';
            }
        }
        else if (input == "empty")
        {
            cout << q.empty() << '\n';
        }
        else if (input == "size")
        {
            cout << q.size() << '\n';
        }
    }
    
    return 0;
}