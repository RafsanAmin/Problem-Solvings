#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const ll MAX = 1000;


ll n, q;
ll grid[MAX][MAX];

ll vv(ll i, ll j){
  if(i > 0 && j > 0 && i <= n && j <= n)
    return grid[i-1][j-1];

  return 0;
}


int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  cin >> n >> q;

  for(ll i = 1; i <= n; i++){
    for(ll j = 1; j <= n; j++){
        char c;
        cin >> c;
        if(c == '*')
          grid[i-1][j-1] = 1 + vv(i-1, j) + vv(i, j-1) - vv(i-1, j-1);
        else
          grid[i-1][j-1] = 0 + vv(i-1, j) + vv(i, j-1) - vv(i-1, j-1);
    }
    cout << "\n";
  }


  for(int i = 0; i < q; i++){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << vv(c, d) + vv(a-1, b-1) - vv(a-1, d) - vv(c, b-1) << "\n";
  }






}
