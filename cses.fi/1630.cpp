#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, sc = 0, sum = 0;
  cin >> n;
  vector<pair<ll, ll>> v(n);
  for (ll i = 0; i < n; i++)
  {

    cin >> v[i].first;
    cin >> v[i].second;
  }

  sort(v.begin(), v.end());

  for (ll i = 0; i < n; i++)
  {
    sum += v[i].first;
    sc += (v[i].second - sum);
  }

  cout << sc;
}