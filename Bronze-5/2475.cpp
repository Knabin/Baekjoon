/*
 * 제목     검증수
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     0 ms
 * 언어     C++17
 */

#include <iostream>
using namespace std;

int main()
{
    int res = 0;

    for (int i = 0; i < 5; ++i)
    {
        int num;
        cin >> num;

        num = num % 10;
        res += num * num % 10;
    }

    cout << res % 10;

	return 0;
}