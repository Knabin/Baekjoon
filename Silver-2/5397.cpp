/*
 * 제목     키로거
 * 결과     맞았습니다!!
 * 메모리   19384 KB
 * 시간     252 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        list<char> L;
        string str;
        auto ptr = L.begin();

        cin >> str;
        for (auto c : str)
        {
            if (c == '<')
            {
                if (ptr != L.begin()) --ptr;
            }
            else if (c == '>')
            {
                if (ptr != L.end()) ++ptr;
            }
            else if (c == '-')
            {
                if (ptr != L.begin())
                {
                    --ptr;
                    ptr = L.erase(ptr);
                }
            }
            else
            {
                L.insert(ptr, c);
            }
        }

        for (const auto& c : L) cout << c;
        cout << '\n';
    }
    
    return 0;
}