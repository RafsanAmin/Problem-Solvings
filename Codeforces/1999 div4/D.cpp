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
    string s, m;
    int j = 0;
    cin >> s >> m;

    for (int i = 0; i < s.size(); i++)
    {
      // cout << "--" << m[j] << " " << s[i] << endl;
      if (j + 1 > m.size())
      {
        if (s[i] == '?')
        {
          s[i] = 'a';
        }
      }
      else if (m[j] == s[i])
      {
        j++;
      }
      else if (s[i] == '?')
      {
        s[i] = m[j];
        j++;
      }
    }

    if (j < m.size())
    {
      cout << "NO\n";
    }
    else
    {
      cout << "YES\n"
           << s << "\n";
    }
  }
}