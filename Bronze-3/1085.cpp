/*
 * 제목     직사각형에서 탈출
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     0 ms
 * 언어     C++17
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, y, w, h;
    int min = 2147000000;
    cin >> x >> y >> w >> h;

    min = std::min(std::min(x, w - x), std::min(y, h - y));

    cout << min;

	return 0;
}