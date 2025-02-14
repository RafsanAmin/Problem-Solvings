#include <bits/stdc++.h>
#define M 1000000

using namespace std;

int value[M];
int tree[5 * M];

void build(int l, int r, int pos)
{
  int mid = (l + r) / 2, lc = 2 * pos + 1, rc = 2 * pos + 2;

  if (l == r)
  {
    tree[pos] = value[l];
  }
  else
  {

    build(l, mid, lc);
    build(mid + 1, r, rc);

    tree[pos] = min(tree[lc], tree[rc]);
  }
}

void update(int l, int r, int pos, int i, int u)
{
  int mid = (l + r) / 2, lc = 2 * pos + 1, rc = 2 * pos + 2;

  if (l == r && i == l)
  {
    tree[pos] = u;
    value[i] = u;
  }
  else if (i >= l && i <= r)
  {
    update(l, mid, lc, i, u);
    update(mid + 1, r, rc, i, u);

    tree[pos] = min(tree[lc], tree[rc]);
  }
}

int query(int l, int r, int pos, int ql, int qr)
{
  int mid = (l + r) / 2, lc = 2 * pos + 1, rc = 2 * pos + 2;

  if (l >= ql && r <= qr)
  {
    return tree[pos];
  }
  else if (r < ql || l > qr)
  {
    return 2E9;
  }
  else
    return min(query(l, mid, lc, ql, qr),
               query(mid + 1, r, rc, ql, qr));
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, q;
  cin >> n >> q;

  for (int i = 0; i < n; i++)
  {
    cin >> value[i];
  }

  build(0, n - 1, 0);

  for (int i = 0; i < q; i++)
  {
    int type, l, r;
    cin >> type >> l >> r;

    if (type == 1)
    {
      update(0, n - 1, 0, l - 1, r);
    }
    else
    {
      cout << query(0, n - 1, 0, l - 1, r - 1) << "\n";
    }
  }
}