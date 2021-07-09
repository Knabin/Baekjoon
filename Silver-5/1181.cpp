/*
 * 제목     단어 정렬
 * 결과     맞았습니다!!
 * 메모리   4640 KB
 * 시간     1236 ms
 * 언어     C++17
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> vStr;

bool isSmaller(const string& str, const string& compareStr)
{
    if (str.length() < compareStr.length()) return true;
    else if (str.length() > compareStr.length()) return false;
    
    return str.compare(compareStr) < 0;
}

void quickSort(int start, int end)
{
    if (start >= end) return;
    auto midStr = vStr[(start + end) / 2];
    int left = start;
    int right = end;

    while (left <= right)
    {
        while (isSmaller(vStr[left], midStr)) ++left;
        while (isSmaller(midStr, vStr[right])) --right;

        if (left <= right)
        {
            swap(vStr[left], vStr[right]);
            ++left; --right;
        }
    }

    quickSort(start, right);
    quickSort(left, end);
}

int main()
{
    // https://www.acmicpc.net/blog/view/56
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    for (int i = 0; i < num; ++i)
    {
        string tmp;
        cin >> tmp;

        if (std::find(vStr.begin(), vStr.end(), tmp) != vStr.end()) continue;
    
        vStr.push_back(tmp);
    }

    quickSort(0, vStr.size() - 1);

    for (int i = 0; i < vStr.size(); ++i)
    {
        cout << vStr[i] << "\n";
    }

	return 0;
}