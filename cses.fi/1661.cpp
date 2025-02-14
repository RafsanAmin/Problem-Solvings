#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll sum = 0, n, x, count = 0;
  map<ll, ll> mp;
  cin >> n >> x;
  vector<ll> p_sum(n);
  vector<ll> v(n);

  mp[0]++;

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++)
  {
    sum += v[i];
    p_sum[i] = sum;

    if (mp[sum - x] > 0)
    {
      count += mp[sum - x];
    }
    mp[sum]++;
  }

  cout << count;
}