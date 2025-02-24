#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const int MAX = 1E6;
const int MOD = 1E9+7;

bool grid[1000][1000];
vector<vector<ll>> dp(1000, vector<ll>(1000, 0));

int main(){
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    string s;
    cin >> s;
    for(int j = 0; j < n; j++){
      if(s[j] == '*') {grid[i][j] = true;}
      else {grid[i][j] = false;}
    }
  }

  if(!grid[0][0])
    dp[0][0] = 1;

  for(int i = 0;  i < n; i++){
    for(int j = 0; j < n; j++){
      if(grid[i][j]) continue;



      if(i-1 >= 0){
        dp[i][j] += dp[i-1][j] % MOD;
      }


      if(j-1 >= 0){
        dp[i][j] += dp[i][j-1] % MOD;
      }

    }
  }

  cout << dp[n-1][n-1] % MOD;
}
