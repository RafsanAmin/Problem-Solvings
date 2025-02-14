#include <bits/stdc++.h>
#define L_MAX 100
#define MAX 1000000

using namespace std;

int sparse_table[L_MAX][MAX];

void build_sparse_table(int n)
{
  for (int l = 1; (1 << l) <= n; l++)
  {
    for (int i = 0; i < n - (1 << l) + 1; i++)
    {
      sparse_table[l][i] = min(sparse_table[l - 1][i], sparse_table[l - 1][i + (1 << (l - 1))]);

      // cout << sparse_table[l][i] << " | ";
    }
    // cout << "\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, q;
  cin >> n >> q;
  for (int i = 0; i < n; i++)
  {
    cin >> sparse_table[0][i];
  }

  build_sparse_table(n);

  for (int i = 0; i < q; i++)
  {
    int l, r, k;
    cin >> l >> r;
    l--;
    r--;
    k = (int)log2(r - l + 1);

    cout << min(sparse_table[k][l], sparse_table[k][r - (1 << k) + 1]) << "\n";
  }
}