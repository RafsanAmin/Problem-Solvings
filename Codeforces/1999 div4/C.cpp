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
    int n, s, m, lastTime = 0, maxI = 0, l, r;
    cin >> n >> s >> m;

    for (int i = 0; i < n; i++)
    {
      cin >> l >> r;
      maxI = max(maxI, l - lastTime);
      lastTime = r;
    }

    maxI = max(maxI, m - lastTime);

    if (s > maxI)
    {
      cout << "NO\n";
    }
    else if (s <= maxI)
    {
      cout << "YES\n";
    }
  }
}