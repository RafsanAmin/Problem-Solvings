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
    int n, sum_a = 0, sum_b = 0, diff;
    cin >> n;

    vector<int> a;
    vector<int> b;

    for (int i = 0; i < n; i++)
    {
      int temp;
      cin >> temp;
      a.push_back(temp);
      sum_a += temp;
    }

    for (int i = 0; i < n; i++)
    {
      int temp;
      cin >> temp;
      b.push_back(temp);
      if (i != 0)
      {
        sum_b += temp;
      }
    }

    diff = sum_a - sum_b;

    for (int i = 0; i < n - 1; i++)
    {

      if (b[i + 1] > a[i])
      {
        diff += b[i + 1] - a[i];
      }
    }

    cout << diff << "\n";
  }
}