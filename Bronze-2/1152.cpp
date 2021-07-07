/*
 * 제목     단어의 개수
 * 결과     맞았습니다!!
 * 메모리   4916 KB
 * 시간     40 ms
 * 언어     C++17
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int res = 0;
    string str;
    getline(cin, str);

    // 앞뒤 trim
    str.erase(0, str.find_first_not_of(' '));
    str.erase(str.find_last_not_of(' ') + 1);

    if (str.empty())
    {
        cout << 0;
        return 0;
    }

    for (auto ch : str)
    { 
        if (ch == ' ') ++res;
    }

    cout << res + 1;

	return 0;
}