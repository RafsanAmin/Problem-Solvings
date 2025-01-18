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
    int n, m, sum = 0, x = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
      string temp;
      cin >> temp;
      int count = temp.size();

      if (count + sum <= m)
      {
        sum += count;
        x++;
      }
      else
      {
        sum += count;
        continue;
      }
    }

    cout << x << "\n";
  }
}