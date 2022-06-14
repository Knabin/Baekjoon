/*
 * 제목     나는야 포켓몬 마스터 이다솜
 * 결과     맞았습니다!!
 * 메모리   25528 KB
 * 시간     216 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    map<int, string> strMap;
    map<string, int> intMap;
    string temp;

    for (int i = 0; i < n; ++i)
    {
        cin >> temp;

        strMap[i + 1] = temp;
        intMap[temp] = i + 1;
    }

    for (int i = 0; i < m; ++i)
    {
        cin >> temp;

        if (auto res = atoi(temp.c_str()); res == 0) 
        {
            cout << intMap[temp] << "\n";
        }
        else
        {
            cout << strMap[res] << "\n";
        }
    }
    
    return 0;
}