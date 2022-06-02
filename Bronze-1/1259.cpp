/*
 * 제목     팰린드롬수
 * 결과     맞았습니다!!
 * 메모리   2024 KB
 * 시간     40 ms
 * 언어     C++17
 */

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool palin(const string& str, const int& leng)
{
    stack<char> sChar;
    for (int i = 0; i < (leng / 2); ++i)
    {
        sChar.push(str[i]);
    }

    auto odd = (leng % 2 != 0) ? 1 : 0;

    for (int i = (leng / 2) + odd; i < str.length(); ++i)
    {
        auto top = sChar.top();
        if (str[i] != top) return false;
        sChar.pop();
    }

    return true;
}

int main()
{
    string input = "";
    while(true)
    {
        cin >> input;

        if (input.compare("0") == 0) break;

        auto res = palin(input, input.length());
        cout << (res ? "yes" : "no") << endl;
    }

	return 0;
}