#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

const int MAX = 1E6;

vector<ll> dp(MAX+1, -1);
vector<ll> coins;

ll sol(ll n, ll x)
{
  dp[0] = 0;

  for(ll i = 1; i <= x; i++){
    ll mn = -1;

    for (ll j = 0; j < n; j++)
    {

      if(i - coins[j] < 0)
        continue;

      if(dp[i - coins[j]] == -1)
        continue;

      if(mn == -1){
        mn = dp[i - coins[j]]+1;
        continue;
      }


      mn = min(mn, dp[i - coins[j]]+1);
    }
    dp[i] = mn;
  }


  return dp[x];
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
