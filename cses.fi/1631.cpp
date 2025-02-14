#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin >> n;

  vector<ll> time(n);

  for (ll i = 0; i < n; i++)
  {
    cin >> time[i];
  }

  sort(time.begin(), time.end());

  ll acc = accumulate(time.begin(), time.end() - 1, 0LL);

  if (acc > time[n - 1])
    cout << acc + time[n - 1];
  else
    cout << 2 * time[n - 1];
}