#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll _10p(ll p)
{
  ll num = 1;
  for (ll k = 0; k < p; k++)
  {
    num *= 10;
  }
  return num;
}

ll _p(ll i)
{
  ll sum = 0;
  for (ll f = 1; f <= i; f++)
  {
    sum += 9 * f * _10p(f - 1);
    // cout << f << "---" << i << "__" << sum << "\n";
  }

  return sum;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    ll i = 1, j = 0, k, n, l, p;
    string ansnumber;
    cin >> n;

    if (n > 9)
    {
      while (_p(i) < n)
      {
        i++;
      }

      k = n - _p(i - 1);
      l = ((k / i) - (k % i == 0 ? 1 : 0)) + (_10p(i - 1));
      ansnumber = to_string(l);

      p = (k - 1) % i;
      cout << ansnumber[p] << "\n";
    }
    else
    {
      cout << n << "\n";
    }
  }
}