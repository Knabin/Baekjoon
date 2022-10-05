/*
 * 제목     회전하는 큐
 * 결과     맞았습니다!!
 * 메모리   2024 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<int> dq;
    int N, M, res = 0;
    cin >> N >> M;

    for (int i = 1; i <= N; ++i)
    {
        dq.push_back(i);
    }

    while(M--)
    {
        int tmp;
        cin >> tmp;

        int index = find(dq.begin(), dq.end(), tmp) - dq.begin();

        while(dq.front() != tmp)
        {
            if (index < dq.size() - index)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            res++;
        }
        dq.pop_front();
    }

    cout << res;

    return 0;
}