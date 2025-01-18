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
    string s;
    bool impossible = true;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
      if (s[i - 1] != s[i])
      {
        swap(s[i - 1], s[i]);
        impossible = false;
        break;
      }
    }

    if (!impossible)
    {
      cout << "YES\n"
           << s << "\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
}