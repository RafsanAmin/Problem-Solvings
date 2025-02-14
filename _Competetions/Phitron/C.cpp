#include <bits/stdc++.h>

using namespace std;

int cti(char c)
{
  return static_cast<int>(c) - 97;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, k, odds = 0;
  string s;
  cin >> n >> k >> s;
  vector<int> chars(26, 0);

  for (char x : s)
  {
    chars[cti(x)]++;
  }

  for (int x : chars)
  {
    if (x % 2 == 1)
    {
      odds++;
    }
  }

  if (odds - 1 <= k)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
}