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
    cin >> s;

    if (s == "1")
    {
      cout << -1 << "\n";
    }
    else
    {
      cout << 1;
      for (int i = 0; i < s.size() - 1; i++)
      {
        cout << 0;
      }
      cout << 1 << "\n";
    }
  }
}