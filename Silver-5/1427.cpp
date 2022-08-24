/*
 * 제목     소트인사이드
 * 결과     맞았습니다!!
 * 메모리   2028 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    multimap<char, int, greater<char>> mmRes;
    string input;
    cin >> input;

    for (const auto& i : input)
    {
        auto tmp = mmRes.find(i); 
        if (tmp != mmRes.end())
        {
            ++tmp->second;
        }
        else
        {
            mmRes.insert(make_pair(i, 1));
        }
    }

    for (const auto& it : mmRes)
    {
        for (int i = 0; i < it.second; ++i)
        {
            cout << it.first;
        }
    }
    
    return 0;
}