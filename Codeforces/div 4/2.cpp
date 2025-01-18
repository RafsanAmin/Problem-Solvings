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
    int n, ans = -1, anstemp = 0;
    cin >> n;
    anstemp = n;
    for (int k = 2; k <= n; k++)
    {
      for (int x = 2; x <= (n / k); x++)
      {
        if (ans < (x * k * (k + 1)) / 2)
        {
          ans = (x * k * (k + 1)) / 2;
          anstemp = x;
        }
      }
    }
    cout << anstemp << "\n";
  }
}