/*
 * 제목     애너그램 만들기
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

    int ch[30]{ 0 }, ch2[30] { 0 };
    string s1, s2;
    int res = 0;

    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); ++i) {
        ++ch[s1[i] - 'a'];
    }

    for (int i = 0; i < s2.length(); ++i) {
        ++ch2[s2[i] - 'a'];
    }

    for (int i = 0; i <= 'z' - 'a'; ++i) {
        res += abs(ch[i] - ch2[i]);
    }

    cout << res;
    
    return 0;
}