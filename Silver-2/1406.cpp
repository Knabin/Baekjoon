/*
 * 제목     에디터
 * 결과     맞았습니다!!
 * 메모리   21020 KB
 * 시간     72 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string doc;
    cin >> doc;

    list<char> lChar;
    for (const auto& c : doc) lChar.push_back(c);
    auto cursor = lChar.end();

    char cmd;
    int cnt;
    cin >> cnt;

    for (int i = 0; i < cnt; ++i) {
        cin >> cmd;

        if (cmd == 'L') {
            if (cursor != lChar.begin()) cursor--;
        } else if (cmd == 'D') {
            if (cursor != lChar.end()) cursor++;
        } else if (cmd == 'B') {
            if (cursor != lChar.begin()) {
                cursor--;
                cursor = lChar.erase(cursor);
            }

        } else if (cmd == 'P') {
            char input;
            cin >> input;
            lChar.insert(cursor, input);
        }
    }

    for (const auto& c : lChar) {
        cout << c;
    }

    return 0;
}