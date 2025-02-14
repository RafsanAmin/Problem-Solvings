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
    int N;
    cin >> N;

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == c && b == d)
    {
      cout << "YES 0" << "\n";
    }
    else if (c == a && d == a)
    {
      cout << "YES 1\n1 2 " << 1 << "\n";
    }
    else if (c == b && d == b)
    {
      cout << "YES 1\n1 2 " << 2 << "\n";
    }
    else
    {
      cout << "NO" << "\n";
    }
  }
}