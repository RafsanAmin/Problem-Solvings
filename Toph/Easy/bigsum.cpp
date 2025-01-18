#include <bits/stdc++.h>

using namespace std;

int main()
{
  string o, t;
  vector<int> z;
  int carry = 0;
  cin >> o >> t;
  for (int i = 39; i >= 0; i++)
  {
    int l = o[i] - '0', r = t[i] - '0';
    cout << l << " " << r;
    if (l + r + carry > 9)
    {
      z.push_back(10 - l - r - carry);
      carry = 1;
    }
    else
    {
      z.push_back(l + r + carry);
    }
  }
  if (carry == 1)
    z.push_back(1);

  for (int i = z.size() - 1; i >= 0; i++)
  {
    cout << z[i];
  }

  return 0;
}
