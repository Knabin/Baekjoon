/*
 * 제목     덱
 * 결과     맞았습니다!!
 * 메모리   2028 KB
 * 시간     4 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

deque<int> dq;

void push_front() 
{
    int input;
    cin >> input;

    dq.push_front(input);
}

void push_back() 
{
    int input;
    cin >> input;

    dq.push_back(input);
}

void pop_front()
{
    if (dq.empty())
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << dq.front() << '\n';
        dq.pop_front();
    }
}

void pop_back()
{
    if (dq.empty())
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << dq.back() << '\n';
        dq.pop_back();
    }
}

void size() 
{
    cout << dq.size() << '\n';
}

void empty()
{
    cout << dq.empty() << '\n';
}

void front()
{
    if (dq.empty())
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << dq.front() << '\n';
    }
}

void back()
{
    if (dq.empty())
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << dq.back() << '\n';
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    string tmp;

    for (int i = 0; i < n; ++i)
    {
        cin >> tmp;

        if (tmp.compare("push_front") == 0)
            push_front();
        else if (tmp.compare("push_back") == 0)
            push_back();
        else if (tmp.compare("pop_front") == 0)
            pop_front();
        else if (tmp.compare("pop_back") == 0)
            pop_back();
        else if (tmp.compare("size") == 0)
            size();
        else if (tmp.compare("empty") == 0)
            empty();
        else if (tmp.compare("front") == 0)
            front();
        else if (tmp.compare("back") == 0)
            back();
    }
    
    return 0;
}