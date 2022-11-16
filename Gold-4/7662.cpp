/*
 * 제목     이중 우선순위 큐
 * 결과     맞았습니다!!
 * 메모리   48884 KB
 * 시간     748 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int T;
    cin >> T;

    // 테스트 케이스
    while(T--)
    {
        int k;
        cin >> k;

        map<int, int> mInt;

        // 연산 갯수
        while(k--)
        {
            char ch;
            int num;
            cin >> ch >> num;
            
            if (ch == 'I')
            {
                mInt[num]++;
            }
            else if (!mInt.empty() && ch == 'D')
            {
                if (num == 1)
                {
                    // 최댓값 삭제
                    auto maxNum = prev(mInt.end());
                    maxNum->second--;

                    if (maxNum->second <= 0)
                    {
                        mInt.erase(maxNum);
                    }
                }
                else if (num == -1)
                {
                    if (mInt.empty()) continue;

                    // 최솟값 삭제
                    auto minNum = mInt.begin();
                    minNum->second--;

                    if (minNum->second <= 0)
                    {
                        mInt.erase(minNum);
                    }
                }
            }
            
        }

        if (mInt.empty())
        {
            cout << "EMPTY" << '\n';
        }
        else
        {
            cout << mInt.rbegin()->first << ' ' << mInt.begin()->first << '\n';
        }
    }

    return 0;
}