/*
 * 제목     숫자의 합
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     0 ms
 * 언어     C++17
 */

#include <iostream>

using namespace std;

int main()
{
    int num = 0, res = 0;
    cin >> num;

    for (int i = 0; i < num; ++i)
    {
        char c;
        cin >> c;

        res += (int)(c - '0');
    }

    cout << res;

	return 0;
}