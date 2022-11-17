/*
 * 제목     달팽이는 올라가고 싶다
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

    int a, b, v;
    cin >> a >> b >> v;

    int day = (v - a) / (a - b);
    cout << day + ((v - a) % (a - b) == 0 ? 1 : 2);
    
    return 0;
}