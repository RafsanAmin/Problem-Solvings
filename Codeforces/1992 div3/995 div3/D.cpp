#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll T;
  cin >> T;
  for (ll t = 1; t <= T; t++)
  {
    ll n, x, y, sum = 0, ans = 0;
    vector<ll> numbers;
    cin >> n >> x >> y;

    for (ll i = 0; i < n; i++)
    {
      ll temp;
      cin >> temp;
      numbers.push_back(temp);
      sum += temp;
    }

    sort(numbers.begin(), numbers.end());

    for (ll i = 0; i < n - 1; i++)
    {
      ll z = sum - numbers[i];
      ll max = upper_bound(numbers.begin() + i + 1, numbers.end(), z - x) - numbers.begin() - 1;
      ll min = lower_bound(numbers.begin() + i + 1, numbers.end(), z - y) - numbers.begin();
      // cout << z << "    " << min << "   " << max << endl;
      ans += (max - min + 1);
    }

    cout << ans << "\n";
  }
}