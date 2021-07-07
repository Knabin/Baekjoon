/*
 * 제목     단어 공부
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
    int alpha[26]{ 0 };
    int max = -2147483647, index = -1;
    string str;
    cin >> str;

    for (auto ch : str)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ++alpha[ch-'a'];
        }
        else
        {
            ++alpha[ch-'A'];
        }
    }

    for (int i = 0; i < 26; ++i)
    {
        if (alpha[i] > max)
        {
            max = alpha[i];
            index = i;
        }
    }

    for (int i = 0; i < 26; ++i)
    {
        if (i == index) continue;
        if (alpha[i] == max)
        {
            cout << "?";
            return 0;
        }
    }

    cout << (char)('A' + index);

	return 0;
}