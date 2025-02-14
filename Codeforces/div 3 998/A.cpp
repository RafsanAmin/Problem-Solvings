#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    vector<int> num(5);
    int i = 0, j = 0, k = 0;
    cin >> num[0] >> num[1] >> num[3] >> num[4];
    num[2] = num[3] - num[1];

    if (num[0] + num[1] == num[2])
      i++;

    if (num[1] + num[2] == num[3])
      i++;

    if (num[2] + num[3] == num[4])
      i++;

    num[2] = num[0] + num[1];

    if (num[0] + num[1] == num[2])
      j++;

    if (num[1] + num[2] == num[3])
      j++;

    if (num[2] + num[3] == num[4])
      j++;

    num[2] = num[4] - num[3];

    if (num[0] + num[1] == num[2])
      k++;

    if (num[1] + num[2] == num[3])
      k++;

    if (num[2] + num[3] == num[4])
      k++;

    cout << max(i, max(j, k)) << "\n";
  }
}