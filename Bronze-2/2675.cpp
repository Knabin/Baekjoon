/*
 * 제목     문자열 반복
 * 결과     맞았습니다!!
 * 메모리   2024 KB
 * 시간     0 ms
 * 언어     C++17
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tmp;
    cin >> tmp;

    for (int i = 0; i < tmp; ++i)
    {
        int num;
        string str;
        cin >> num >> str; 

        int len = str.length();
        int tmp = 0;
        
        for (int j = 0; j < len; ++j)
        {
            str.insert(str.begin() + j + tmp, num - 1, str[j + tmp]);
            tmp += num - 1;
        }

        cout << str << endl;
    }

	return 0;
}