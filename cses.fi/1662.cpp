#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll sum = 0, n, count = 0;
  map<ll, ll> mp;
  cin >> n;
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
    int rem = (sum % n);

    if (rem < 0)
    {
      rem = n + rem;
    }
    // cout << rem << "__";
    if (mp[rem] > 0)
    {
      count += mp[rem];
    }
    mp[rem]++;
  }

  cout << count;
}