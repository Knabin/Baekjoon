/*
 * 제목     합
 * 결과     맞았습니다!!
 * 메모리   1980 KB
 * 시간     0 ms
 * 언어     C++17
 */

#include <iostream>
using namespace std;

int main()
{
	int a, r = 0;
	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		r += i;
	}

	cout << r;

	return 0;
}