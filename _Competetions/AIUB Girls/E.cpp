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
    int x, y, s;
    cin >> x >> y >> s;
    if (x <= y)
    {
      cout << 0 << endl;
      ;
    }
    else
    {
      cout << (x - y) * s << endl;
    }
  }
}