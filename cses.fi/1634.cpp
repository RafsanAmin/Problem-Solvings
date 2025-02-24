#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

const int MAX = 1E6;
const int MOD = 1E9 + 7;
vector<int> dp(MAX+1, -1);

ll sol(ll n)
{
  dp[0] = 1;
  dp[1] = 1;

  for(ll i = 2; i <= n; i++){
    ll sum = 0;

    for (ll j = 1; j <= min(i, (ll)6); j++)
    {
      sum += (dp[i - j] % MOD);
    }
    dp[i] = sum % MOD;

  }


  return dp[n];
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin >> n;
  cout << sol(n);
}
