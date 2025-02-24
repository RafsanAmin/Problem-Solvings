#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

const int MAX = 1E5 + 1;

vector<ll> dp(MAX, 0);
vector<ll> cst(1000);
vector<ll> pg(1000);

ll solve(ll n, ll x)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = x; j > 0; j--)
    {
      if(cst[i] <= j){
        dp[j] = max(dp[j], dp[j - cst[i]] + pg[i]);
      }
    }
  }

  return dp[x];
}

int main()
{
  ll n, x;
  cin >> n >> x;

  for (int i = 0; i < n; i++)
    cin >> cst[i];

  for (int i = 0; i < n; i++)
    cin >> pg[i];

  cout << solve(n, x);
}
