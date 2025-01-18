#include <bits/stdc++.h>

using namespace std;

void l_p(int x, auto s)
{
  for (int i = 0; i < x; i++)
  {
    cout << s;
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
    int x, y, xq = 10000000, yq = 10000000, i;
    char xc = 'R', yc = 'F';
    cin >> x >> y;
    cin >> i;

    if (i == 1)
    {
      cin >> xq >> yq;
    }

    if (x < 0)
    {
      xc = 'L';
    }
    if (y < 0)
    {
      yc = 'B';
    }

    if (y == 0 && yq == 0)
    {
      cout << "F";
      l_p(abs(x), xc);
      cout << "B";
    }
    else if (x == 0 && xq == 0)
    {
      cout << "R";
      l_p(abs(y), yc);
      cout << "L";
    }
    else if (x == xq || yq == 0)
    {
      l_p(abs(y), yc);
      l_p(abs(x), xc);
    }
    else if (y == yq || xq == 0)
    {

      l_p(abs(x), xc);
      l_p(abs(y), yc);
    }
    else
    {
      l_p(abs(y), yc);
      l_p(abs(x), xc);
    }

    cout << "\n";
  }
}