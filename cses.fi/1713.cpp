#include <bits/stdc++.h>

using namespace std;

const int MX = 1e6;

vector<int> lp(MX+1, 0);

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  for(int i = 2; i <= MX; i++){
    if(lp[i] == 0){
      for(int j = i; j <= MX; j+=i){
        lp[j] = i;
      }
    }

  }

  int t;
  cin >> t;
  while(t--){
    int x, div = 1;
    cin >> x;

    while(x!=1){
      int prime = lp[x];
      int cnt = 0;
      while(x%prime == 0){
        x /= prime;
        cnt++;
      }
      div *= (cnt+1);
    }

    cout << div << "\n";
  }
}
