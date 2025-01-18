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
    int n, m, y1 = 0, y2 = 0, f;
    bool checked = false;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
      string s;
      cin >> s;
      int c = count(s.begin(), s.end(), '#');
      int ff = s.find('#');
      if (c == 1 && !checked)
      {
        checked = true;
        y1 = i;
        f = ff + 1;
      }
      else if (c == 1 && checked)
      {
        y2 = i;

        break;
      };
    }
    if (m == 1 && n == 1)
    {
      cout << "1 1\n";
    }
    else if (y2 == 0)
    {
      cout << y1 << " " << f << "\n";
    }
    else
    {
      cout << ((y1 + y2) / 2) << " " << f << "\n";
    }
  }
}