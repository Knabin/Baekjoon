/*
 * 제목     영화감독 숌
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     84 ms
 * 언어     C++17
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int input, cnt = 0, num = 665;
    string numStr;

    cin >> input;

    while (++num)
    {
        numStr = to_string(num);

        // 숫자에서 666을 찾으면 cnt 증가
        if (numStr.find("666") != -1)
        {
            ++cnt;
        }
        
        if (cnt == input)
        {
            break;
        }
    }

    cout << numStr << endl;

	return 0;
}