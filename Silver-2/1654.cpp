/*
 * 제목     랜선 자르기
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     8 ms
 * 언어     C++17
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    vector<unsigned int> arr;
    unsigned int left, right = 0, mid = 0, imax = 0, ans = 0;
    
    cin >> K >> N;

    arr.resize(K);

    for (int i = 0; i < K; ++i)
    {
        cin >> arr[i];
        imax = max(imax, arr[i]);
    }

    left = 1;
    right = imax;

    while (left <= right)
    {
        unsigned int cnt = 0;
        mid = (left + right) / 2;

        for (int i = 0; i < K; ++i)
            cnt += arr[i] / mid;

        if (cnt >= N)
        {
            left = mid + 1;
            ans = max(ans, mid);
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans;

	return 0;
}