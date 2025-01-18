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
    long double Y, X;
    cin >> Y >> X;
    if (Y >= X)
    {
      cout << 1 << endl;
    }
    else
    {
      cout << ceil(log2(X / Y) + 1) << endl;
    }
  }
}