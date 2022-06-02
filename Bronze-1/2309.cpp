/*
 * 제목     일곱 난쟁이
 * 결과     맞았습니다!!
 * 메모리   2020 KB
 * 시간     0 ms
 * 언어     C++17
 */
#include <bits/stdc++.h>
using namespace std;

int num[9];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 0; i < 9; ++i)
  {
    cin >> num[i];
  }

  sort(num, num + 9);

  do
  {
    int sum = 0;
    for (int i = 0; i < 7; ++i) sum += num[i];
    if (sum == 100) break;
  } while(next_permutation(num, num + 9));

  for (int i = 0; i < 7; ++i)
  {
    cout << num[i] << endl;
  }

  return 0;
}