#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  if (n == 1)
  {
    cout << 1;
  }
  else if (n < 4)
  {
    cout << "NO SOLUTION";
  }
  else
  {
    cout << 2;
    for (int i = 4; i <= n; i += 2)
    {
      cout << " " << i;
    }
    for (int i = 1; i <= n; i += 2)
    {
      cout << " " << i;
    }
  }
}