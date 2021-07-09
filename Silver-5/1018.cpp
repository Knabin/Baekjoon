/*
 * 제목     체스판 다시 칠하기
 * 결과     맞았습니다!!
 * 메모리   2024 KB
 * 시간     0 ms
 * 언어     C++17
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<char>> vChar;

int whiteStart(int x, int y)
{
    int res = 0;

    for (int i = y; i < y + 8; ++i)
    {
        for (int j = x; j < x + 8; ++j)
        {
            // i + j가 짝수면 W, 홀수면 B
            if ((i + j) % 2 == 0 && vChar[i][j] != 'W' ||
                (i + j) % 2 != 0 && vChar[i][j] != 'B')
            {
                ++res;
            }
        }
    }

    return res;
}

int blackStart(int x, int y)
{
    int res = 0;

    for (int i = y; i < y + 8; ++i)
    {
        for (int j = x; j < x + 8; ++j)
        {
            // i + j가 짝수면 B, 홀수면 W
            if ((i + j) % 2 == 0 && vChar[i][j] != 'B' ||
                (i + j) % 2 != 0 && vChar[i][j] != 'W')
            {
                ++res;
            }
        }
    }

    return res;
}

int main()
{
    int a, b, min = 2147000000;
    cin >> a >> b;

    vChar.resize(a);

    for (int i = 0; i < a; ++i)
    {
        vector<char> vTmp(b);
        for (int j = 0; j < b; ++j)
        {
            char input;
            cin >> input;

            vTmp[j] = input;
        }
        vChar[i] = vTmp;
    }
    
    for (int i = 0; i + 7 < a; ++i)
    {
        for (int j = 0; j + 7 < b; ++j)
        {
            min = std::min(min, std::min(blackStart(j, i), whiteStart(j, i)));
        }
    }

    cout << min;

	return 0;
}