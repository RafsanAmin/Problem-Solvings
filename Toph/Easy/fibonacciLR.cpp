#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int L, R, f0 = 0, f1 = 1, t = 0;

  cin >> L >> R;

  if (L == 0)
  {
    cout << 0 << endl;
  }
  for (int x = 1; f1 + f0 <= R; x++)
  {
    t = f1 + f0;
    if (t >= L)
    {
      cout << t << endl;
    }
    f0 = f1;
    f1 = t;
  }
}