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
    long long int y, x, n, z, del_x, del_y, ans;
    cin >> y >> x;

    n = max(y, x);

    z = n * n - n + 1;

    del_x = n - x;
    del_y = n - y;

    if (n % 2 == 0)
    {
      if (x < n)
      {
        ans = z + del_x;
      }
      else
      {
        ans = z - del_y;
      }
    }
    else
    {
      if (x < n)
      {
        ans = z - del_x;
      }
      else
      {
        ans = z + del_y;
      }
    }

    cout << ans << "\n";
  }
}