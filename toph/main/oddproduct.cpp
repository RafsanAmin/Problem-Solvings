#include <bits/stdc++.h>

using namespace std;

int main()
{

  int T, total, num, even = 0, odd = 0;
  cin >> T;

  while (T-- != 0)
  {
    cin >> total;
    for (int i = 0; i < total; i++)
    {
      cin >> num;
      num % 2 == 0 ? even++ : odd++;
    }
    if (even == 0)
    {
      cout << 0 << endl;
    }
    else if (odd == 0)
    {
      cout << -1 << endl;
    }
    else
    {
      cout << even << endl;
    }

    even = 0, odd = 0;
  }

  return 0;
}