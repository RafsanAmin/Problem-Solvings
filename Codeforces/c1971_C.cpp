#include <bits/stdc++.h>

using namespace std;

bool insideRange(int l, int r, int num)
{
  if (l < r)
  {
    return num >= l && num <= r;
  }
  else
  {
    return !(num > r && num < l);
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((insideRange(a, b, c) && insideRange(b, a, d)) || (insideRange(a, b, d) && insideRange(b, a, c)))
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }

    // cout << insideRange(3, 12, 11) << " " << insideRange(12, 3, 11) << "\n";
  }
}