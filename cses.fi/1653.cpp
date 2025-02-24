#include <bits/stdc++.h>
#define f first
#define s second

using namespace std;


int main(){
  int n, x;
  cin >> n >> x;

  vector<pair<int, int>> dp(1 << n, {1E9+1, 1E9+1});
  vector<int> w(n);

  for(int i = 0; i < n; i++)
    cin >> w[i];

  dp[0] = {1,0};

  for(int mask = 1; mask < (1 << n); mask++){
    for(int i = 0; i < n; i++){
      if(mask & (1 << i)){
        pair<int, int> prev = dp[mask^(1<<i)];

        if(w[i] + prev.s <= x){
          dp[mask] = min(dp[mask], {prev.f, prev.s + w[i]});
        }else{
          dp[mask] = min(dp[mask], {prev.f+1, w[i]});
        }
      }

    }
  }


  cout << dp[(1 << n)-1].f;

}
