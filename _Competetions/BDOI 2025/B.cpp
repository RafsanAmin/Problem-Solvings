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
    int L, X;
    cin >> L >> X;
    if ((X - L) % 2 == 0 && X >= L)
    {
      cout << X - L << " " << 1 << "\n";
    }
    else if (X % 2 == 0)
    {
      cout << X << " " << 0 << "\n";
    }
    else
    {
      cout << "-1 -1" << "\n";
    }
  }
}