/*
 * 제목     오늘 날짜
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
    
    time_t timer = time(NULL);
    auto* t = localtime(&timer);

    printf("%d-%02d-%d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);

    return 0;
}