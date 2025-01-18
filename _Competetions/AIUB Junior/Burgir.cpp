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
    int x, y, ans;
    cin >> x >> y;
    if (x == 1 && y == 1)
    {
      cout << 0;
      continue;
    }
    if (x >= y)
    {
      int remX, remY, burgirs;
      burgirs = min(x / 2, y);
      remX = x - (burgirs * 2);
      remY = y - (burgirs);

      if (remX == remY || remX == 0 || remY == 0)
      {
        ans = burgirs;
      }
      else
      {
        ans = burgirs + 1;
      }
    }
    else if (y > x)
    {

      int remX, remY, burgirs;
      burgirs = min(y / 2, x);
      remY = y - (burgirs * 2);
      remX = x - (burgirs);
      if (remX == remY || remX == 0 || remY == 0)
      {
        ans = burgirs;
      }
      else
      {
        ans = burgirs + 1;
      }
    }
    cout << max(ans, min(x / 3, y / 3) * 2 + max(x % 2, y % 2)) << "\n";
  }
}