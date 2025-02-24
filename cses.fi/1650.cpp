#include <bits/stdc++.h>
#define M 1000000

using namespace std;

typedef long long int ll;

ll value[M];
ll sum[4 * M];


// l, r, pos, ql, qr

void build(ll l, ll r, ll pos){
  sum[pos] = 0;
  ll mid = (l + r) / 2, lc = 2*pos, rc=2*pos +1;
  if(l == r){
    sum[pos] = value[l];
  }else{
    build(l, mid, lc);
    build(mid+1, r, rc);
    sum[pos] =  sum[lc] ^ sum[rc] ;
  }
}

void update(ll l, ll r, ll pos, ll t, ll v){
  ll mid = (l + r) / 2, lc = 2*pos, rc=2*pos +1;

  if(l == r && t == l){
    sum[pos] = v;
  }else if(t >= l && t <= r){
    update(l, mid, lc, t, v);
    update(mid+1, r, rc, t, v);

    sum[pos] = sum[lc] ^ sum[rc];
  }

}


ll query(ll l, ll r, ll pos, ll ql, ll qr){
  ll mid = (l + r) / 2, lc = 2*pos, rc=2*pos +1;

  if(l >= ql && r <= qr)
  {
    return sum[pos];
  }

  if(l > qr || r < ql){
    return 0;
  }

  return query(l, mid, lc, ql, qr) ^ query(mid+1, r, rc, ql, qr);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, q;
  cin >> n >> q;
  for (ll i = 1; i <= n; i++)
  {
    cin >> value[i];
  }
  build(1, n, 1);
  for (ll i = 0; i < q; i++)
  {
    ll l, r;
    cin >> l >> r;
    cout << query(1, n, 1, l, r) << "\n";
  }
}
