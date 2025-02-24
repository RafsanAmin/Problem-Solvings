#include <bits/stdc++.h>

const int MOD = 1e9 + 7;
typedef long long int ll;

using namespace std;

ll bigmod(ll b, ll e){
  if(e == 1)
    return b;

  ll m = (bigmod(b, e/2))%MOD;

  return ((m*m)%MOD * (e % 2 == 0 ? 1 : b))%MOD;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;
  cin >> t;
  while(t--){
    ll a, b, ans;
    cin >> a >> b;
    if(a == 0 && b == 0) ans = 1;
    else if(a == 0 && b!=0) ans = 0;
    else if(a != 0 && b==0) ans = 1;
    else ans = bigmod(a, b);
    cout << ans << "\n";
  }



}
