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
    int n;
    cin >> n;
    vector<int> val(n);

    for (int i = 0; i < n; i++)
    {
      cin >> val[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
      if (val[i] <= val[i + 1])
      {
        int mn = val[i + 1] - val[i];
        if (i != 0)
        {
          if (mn >= val[i - 1])
          {
            val[i] = 0;
            val[i + 1] = mn;
          }
        }
        else
        {
          val[i] = 0;
          val[i + 1] = mn;
        }
      }
    }
    bool ans = true;
    for (int i = 0; i < n - 1; i++)
    {
      if (val[i] > val[i + 1])
      {
        ans = false;
      }
    }

    if (ans)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
}