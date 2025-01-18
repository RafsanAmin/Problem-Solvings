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
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
      cout << "YES\n";
      for (int i = 2; i <= n; i += 2)
      {

        cout << "AA";
        if (i != n)
        {
          cout << "B";
        }
      }
      cout << endl;
    }
    else
    {
      cout << "NO\n";
    }
  }
}