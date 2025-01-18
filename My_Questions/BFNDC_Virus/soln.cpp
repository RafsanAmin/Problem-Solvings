#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

namespace solution
{
  void best()
  {
    ll N, X, K;
    cin >> N >> X >> K;
    double sum = log(X);
    for (ll i = 2; i <= N + 1; i++)
    {
      sum += log(i);
    }
    ll ans = ceil(sum / log(K));
    cout << ans << "\n";
  }
  void inefficient()
  {
    ll N, X, K, ans = 0;
    cin >> N >> X >> K;
    ll product = X;
    for (int i = 1; i <= N; i++)
    {
      product *= i + 1;
    }
    while (product > 1)
    {
      product = (product / K) + (product % K != 0);
      ans++;
    }
    cout << ans << endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll T;
  cin >> T;
  for (ll t = 1; t <= T; t++)
  {
    solution::inefficient();
  }
}
