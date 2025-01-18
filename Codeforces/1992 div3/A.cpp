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
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < 5; i++)
    {
      if (a <= b && a <= c)
      {
        a++;
      }
      else if (b <= c && b <= a)
      {
        b++;
      }
      else if (c <= a && c <= b)
      {
        c++;
      }
    }
    cout << a * b * c << "\n";
  }
}