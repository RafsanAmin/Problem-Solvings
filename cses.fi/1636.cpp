#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

const int MAX = 1E6;
const int MOD = 1E9+7;

vector<ll> dp(MAX+1, 0);
vector<ll> coins;

ll sol(ll n, ll x)
{
  dp[0] = 1;

  for (ll j = 0; j < n; j++)
    {
      for(ll i = 1; i <= x; i++){
        if(i - coins[j] < 0)
          continue;
        dp[i] += dp[i - coins[j]] % MOD;

    }
  }


  return dp[x]%MOD;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, x;
  cin >> n >> x;
  coins.resize(n);

  for(int i = 0; i < n; i++)
    cin >> coins[i];


  cout << sol(n, x);
}
