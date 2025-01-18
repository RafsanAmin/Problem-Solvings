#include <bits/stdc++.h>

using namespace std;

int $(int a, int b)
{
  if (a > b)
  {
    return 1;
  }
  else if (a == b)
  {
    return 0;
  }
  else if (a < b)
  {
    return -1;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    int a1, a2, b1, b2, COUNT = 0;
    cin >> a1 >> a2 >> b1 >> b2;

    if (($(a1, b1) + $(a2, b2)) > 0)
    {
      COUNT += 2;
    }

    if (($(a1, b2) + $(a2, b1)) > 0)
    {
      COUNT += 2;
    }

    cout << COUNT << "\n";
  }
}