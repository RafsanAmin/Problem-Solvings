#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const ll mod = 1E9 + 7;

ll factmod(ll n)
{
  if (n == 1)
    return 1;

  return (n * factmod(n - 1)) % mod;
}

ll bigmod(ll a, ll b)
{
  if (b == 0)
  {
    return 1;
  }

  ll stp = bigmod(a, b / 2);

  if (b % 2 != 0)
  {

    return ((a % mod) * ((stp * stp) % mod)) % mod;
  }

  return (stp * stp) % mod;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll N, a, b, c, d;
  cin >> N;
  a = ((N * (N + 1)) / 2) % mod;
  b = bigmod(N, N);
  c = factmod(N);
  d = (bigmod(2, N) + bigmod(3, N)) % mod;
  cout << a << " " << b << " " << c << " " << d;
}