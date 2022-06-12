/*
 * 제목     한국이 그리울 땐 서버에 접속하지
 * 결과     맞았습니다!!
 * 메모리   2024 KB
 * 시간     4 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string str, pre, suf;
    cin >> str;

    int pos = str.find('*');
    pre = str.substr(0, pos);
    suf = str.substr(pos + 1);

    for (int i = 0; i < n; ++i)
    {
        string input;
        cin >> input;

        if (input.size() < pre.size() + suf.size())
        {
            cout << "NE" << endl;
        }
        else if (input.substr(0, pre.size()) == pre && input.substr(input.size() - suf.size()) == suf)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NE" << endl;
        }
    }

    return 0;
}