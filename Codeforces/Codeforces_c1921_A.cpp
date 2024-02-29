#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T-- != 0)
  {
    int s = 1001;
    int ans;
    for (int i = 0; i < 4; i++)
    {
      int x, y;
      cin >> x >> y;
      if (s != x && s < 1001)
      {
        ans = abs(s - x);
        s = 1002;
      }
      if (s != 1002)
      {
        s = x;
      }
    }
    cout << ans * ans << endl;
  }
}