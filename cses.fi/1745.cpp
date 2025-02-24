#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const int MAX = 1E6;

vector<ll> coins;
vector<bool> dp(MAX+1, false);


void solve(ll n){
  dp[0] = true;
  for(int i = 0; i < n; i++){
    for(int j = MAX; j >= coins[i]; j--){
      if(dp[j])
          continue;
      dp[j] = dp[j - coins[i]];
    }

  }
}

int main(){
  ll n, cnt =0;
  cin >> n;
  coins.resize(n);
  vector<ll> sol;

  for(int i = 0; i < n; i++)
    cin >> coins[i];

  solve(n);


  for(int i = 1; i <= MAX; i++){
    if(dp[i]){
      cnt++;
      sol.push_back(i);
    }
  }
  cout << cnt << "\n";
  for(ll x:sol){
    cout << x << " ";
  }
}
