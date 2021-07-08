/*
 * 제목     상수
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     0 ms
 * 언어     C++17
 */

#include <iostream>
#include <vector>

using namespace std;

int reverse(int ori)
{
    // 123 -> 321
    int res = 0;

    while(true)
    {
        res += ori % 10;
        ori /= 10;

        if (ori == 0) break;
        res *= 10;
    }

    return res;
}

int main()
{
    vector<int> vInt;

    for (int i = 0; i < 2; ++i)
    {
        int input;
        cin >> input;

        vInt.push_back(reverse(input));
    }

    cout << (vInt[0] > vInt[1] ? vInt[0] : vInt[1]);

	return 0;
}