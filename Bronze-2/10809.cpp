/*
 * 제목     알파벳 찾기
 * 결과     맞았습니다!!
 * 메모리   2024 KB
 * 시간     0 ms
 * 언어     C++17
 */

#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
    array<int, 26> alpha;
    alpha.fill(-1);

    string str;
    cin >> str;

    for (int i = 0; i < str.length(); ++i)
    {
        if (alpha[str[i] - 'a'] == -1)
            alpha[str[i] - 'a'] = i;
    }

    for (int i = 0; i < 26; ++i)
    {
        cout << alpha[i] << " ";
    }

	return 0;
}