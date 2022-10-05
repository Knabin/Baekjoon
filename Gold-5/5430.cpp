/*
 * 제목     AC
 * 결과     맞았습니다!!
 * 메모리   3388 KB
 * 시간     36 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

void parse(deque<int>& dq, string input)
{
    int cur = 0;
    for (int i = 1; i + 1 < input.size(); ++i)
    {
        if (input[i] == ',') 
        {
            dq.push_back(cur);
            cur = 0;
        }
        else
        {
            cur = 10 * cur + (input[i] - '0');
        }
    }
    
    if (cur != 0) dq.push_back(cur);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    
    while(T--)
    {
        deque<int> dq;
        string cmd, arr;
        int n;
        bool reverse = false, isError = false;
        cin >> cmd >> n >> arr;
        
        parse(dq, arr);

        for (const auto& c : cmd)
        {
            if (c == 'R')
            {
                reverse = !reverse;
            }
            // case D
            else
            {
                if (dq.empty())
                {
                    isError = true;
                    break;
                }
                if (reverse) dq.pop_back();
                else dq.pop_front();
            }  
        }

        if (isError) cout << "error\n";
        else
        {
            if (reverse) std::reverse(dq.begin(), dq.end());
            cout << '[';
            for (int i = 0; i < dq.size(); ++i)
            {
                cout << dq[i];
                if (i + 1 != dq.size()) cout << ',';
            }
            cout << "]\n";
        }
    }
    
    return 0;
}