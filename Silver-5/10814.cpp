/*
 * 제목     나이순 정렬
 * 결과     맞았습니다!!
 * 메모리   9948 KB
 * 시간     72 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, age;
    string name;

    cin >> n;

    multimap<int, string> members;

    while(n--)
    {
        cin >> age >> name;
        members.insert(make_pair(age, name));
    }

    for (const auto& m : members)
    {
        cout << m.first << ' ' << m.second << '\n';
    }

    return 0;
}