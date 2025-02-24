#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const ll MAX = 1E6;
const ll MOD = 1E9+7;

vector<ll> dp(MAX+1, 0);

ll solve(ll n){
  const ll sm = (n * (n + 1))  / 2;

  if(sm % 2 == 0){
    dp[0] = 1;
    for(int i = 1; i < n; i++){
      for(int j = sm/2; j >= i; j--){
        dp[j] += dp[j - i];
        dp[j] %= MOD;
      }
    }
    return (dp[sm/2]) % MOD;
  }else{
    return 0;
  }
}

int main(){
  ll n;
  cin >> n;

  cout << solve(n);
}
