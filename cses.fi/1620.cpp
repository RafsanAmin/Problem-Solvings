#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, t, mn = 10E15;
  cin >> n >> t;

  vector<ll> num(n);

  for (int i = 0; i < n; i++)
  {
    cin >> num[i];
    mn = min(mn, num[i]);
  }

  ll lo = 0, hi = mn * t, sum = 0, mid, ans = 0;

  while (lo <= hi)
  {
    sum = 0;
    mid = (hi + lo) / 2;
    for (ll i = 0; i < n; i++)
    {
      sum += mid / num[i];

      if (sum > t)
        break;
    }

    if (sum >= t)
    {
      hi = mid - 1;
      ans = mid;
    }
    else
    {
      lo = mid + 1;
    }
  }

  cout << ans;
}