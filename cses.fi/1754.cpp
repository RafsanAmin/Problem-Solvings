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
    int a, b, ra, rb;
    cin >> a >> b;

    ra = (2 * a - b);
    rb = (2 * b - a);

    if (ra >= 0 && rb >= 0 && ra % 3 == 0 && rb % 3 == 0)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
}