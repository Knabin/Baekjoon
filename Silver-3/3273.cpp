/*
 * 제목     두 수의 합
 * 결과     맞았습니다!!
 * 메모리   7760 KB
 * 시간     12 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nums[1000001]{ 0 };
    bool occur[2000001]{ false };
    int n, x, res = 0;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    cin >> x;

    for (int i = 0; i < n; ++i)
    {
        if (x - nums[i] > 0 && occur[x - nums[i]]) res++;
        occur[nums[i]] = true;
    }

    cout << res;
    
    return 0;
}