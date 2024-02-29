#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T-- != 0)
  {
    int x, n;
    cin >> x >> n;

    if (x > n)
    {
      cout << "Invalid!\n";
    }
    else
    {
      for (int i = 1; i <= floor(n / x); i++)
      {
        cout << x * i << "\n";
      }
    }
    cout << "\n";
    // write your code here
  }
}