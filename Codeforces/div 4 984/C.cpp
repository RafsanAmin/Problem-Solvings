#include <bits/stdc++.h>

using namespace std;

int m[200005];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    string s;

    fill(m, m + 200005, 0);

    int q;

    cin >> s;
    cin >> q;

    int counts = 0;

    for (int i = 0; i < s.size() - 3; i++)
    {
      if (s.substr(i, 4) == "1100")
      {
        m[i] = 1;
        counts++;
      }
    }

    s = "XXX" + s + "XXX";

    for (int i = 0; i < q; i++)
    {
      int j;
      char v;
      cin >> j >> v;
      j--;
      int cj = j + 3;
      char ov = s[cj];

      s[cj] = v;

      // cout << s.substr(cj - 3, 4) << endl;

      if (ov == v)
      {
        if (counts > 0)
        {
          cout << "YES\n";
        }
        else
        {
          cout << "NO\n";
        }
      }
      else if (s.substr(cj, 4) == "1100" || s.substr(cj - 1, 4) == "1100" || s.substr(cj - 2, 4) == "1100" || s.substr(cj - 3, 4) == "1100")
      {
        cout << "YES\n";
        counts++;
        if (s.substr(cj, 4) == "1100")
        {

          m[j] = 1;
        }
        else if (s.substr(cj - 1, 4) == "1100")
        {
          m[j - 1] = 1;
        }
        else if (s.substr(cj - 2, 4) == "1100")
        {
          m[j - 2] = 1;
        }
        else if (s.substr(cj - 3, 4) == "1100")
        {
          m[j - 3] = 1;
        }
      }
      else if (m[j] == 1 || m[j - 1] == 1 || m[j - 2] == 1 || m[j - 3] == 1)
      {
        counts--;
        m[j] = 0;
        cout << "NO\n";
      }
      else if (counts > 0)
      {
        cout << "YES\n";
      }
      else
      {
        cout << "NO\n";
      }
    }
  }
}