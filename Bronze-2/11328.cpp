/*
 * 제목     Strfry
 * 결과     맞았습니다!!
 * 메모리   2024 KB
 * 시간     4 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

void InputString(char arr[])
{
    string input;
    cin >> input;
    
    for (const auto& c : input)
    {
        arr[c - 'a']++;
    }
}

bool CheckArr(char arr1[], char arr2[])
{
    for (int i = 0 ; i <= 'z' - 'a'; ++i)
    {
        if (arr1[i] != arr2[i]) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char ori[30]{ 0 }, chk[30]{ 0 };

    int N;
    cin >> N;

    string input;

    while(N--)
    {
        fill(ori, ori + 30, 0);
        fill(chk, chk + 30, 0);

        InputString(ori);
        InputString(chk);

        if (CheckArr(ori, chk))
        {
            cout << "Possible" << '\n';
        }
        else
        {
            cout << "Impossible" << '\n';
        }
    }

    return 0;
}