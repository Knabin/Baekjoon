/*
 * 제목     음계
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     0 ms
 * 언어     C++17
 */

#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    bool isAsc = true;
    cin >> num;

    if (num == 1) isAsc = true;
    else if (num == 8) isAsc = false;
    else
    {
        cout << "mixed";
        return 0;
    }

    for (int i = 0; i < 7; ++i)
    {
        int tmp;
        cin >> tmp;

        if ((isAsc && tmp != num + 1) || (!isAsc && tmp != num - 1))
        {
            cout << "mixed";
            return 0;
        }
        
        num = tmp;
    }

    cout << (isAsc ? "ascending" : "descending");

	return 0;
}