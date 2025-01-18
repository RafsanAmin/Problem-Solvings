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
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = n; i > m; i--)
    {
      cout << i << " ";
    }
    for (int i = 1; i <= m; i++)
    {
      cout << i << " ";
    }
    cout << "\n";
  }
}