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
    int a, b, c, h;
    cin >> a >> b >> c;
    if ((a * a) + (b * b) == (c * c) || (b * b) + (c * c) == (a * a) || (a * a) + (c * c) == (b * b))
    {
      cout << "Case " << t << ": yes\n";
    }
    else
    {
      cout << "Case " << t << ": no\n";
    }
  }
}