#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T, i = 1, ans;
  int x, y;
  cin >> T;
  while (i <= T)
  {
    cin >> x >> y;
    if (x == 1 || y == 1)
    {
      ans = max(y, x);
    }
    else if (y == 2 || x == 2)
    {
      ans = ((x * y) / 8) * 4 + (((x * y) % 8) >= 4 ? 4 : (x * y) % 8);
    }
    else
    {
      ans = ceil((float)(x * y) / 2);
    }
    cout << "Case " << i << ": " << ans << endl;
    i++;
  }
}