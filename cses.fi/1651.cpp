#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const int MAX = 1E6;

vector<ll> value(MAX);
vector<ll> tree(4*MAX, 0);


void update(ll l, ll r, ll pos, ll ql, ll qr, ll u){
  ll mid = (l + r)/2, lc = 2*pos, rc=2*pos+1;



  if(ql > r || qr < l){
    return;
  }

  if(ql <= l && qr >= r){
    tree[pos]+=u;
    return;
  }

  update(l, mid, lc, ql, qr, u);
  update(mid+1, r, rc, ql, qr, u);
}

ll query(int l, int r, int pos, int t){
  ll mid = (l + r)/2, lc = 2*pos, rc=2*pos+1;

  if(l == r && l == t){
    return tree[pos];
  }



  if(t <= mid){
    return query(l, mid, lc, t) + tree[pos];
  }else{
    return query(mid+1, r, rc, t) + tree[pos];
  }
}


int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, q;
  cin >> n >> q;

  for(int i = 0; i < n; i++)
    cin >> value[i+1];

  for(int i = 0;  i < q; i++){
    int type;
    cin >> type;
    if(type == 2){
      int t;
      cin >> t;
      cout << value[t] + query(1, n, 1, t) << "\n";
    }else{
      int l, r, u;
      cin >> l >> r >> u;
      update(1, n, 1, l, r, u);
    }
  }
}
