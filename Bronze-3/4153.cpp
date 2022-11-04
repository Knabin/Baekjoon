/*
 * 제목     직각삼각형
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> vInt;
    vInt.resize(3);

    while(true)
    {
        cin >> vInt[0] >> vInt[1] >> vInt[2];
        if (vInt[0] == 0 && vInt[1] == 0 && vInt[2] == 0) break;

        sort(vInt.begin(), vInt.end());

        if (abs(pow(vInt[0], 2) + pow(vInt[1], 2) - pow(vInt[2], 2)) < DBL_EPSILON)
        {
            cout << "right\n";
        }
        else
        {
            cout << "wrong\n";
        }
    }

    return 0;
}