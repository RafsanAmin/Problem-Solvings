#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n, m, k, ans = 0;
  cin >> n >> m >> k;
  vector<long long int> a(n);
  vector<long long int> b(m);
  vector<bool> b_visited(m);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  long long int j = 0, l = 0;

  while (j < n && l < m)
  {
    int exp = a[j], avail = b[l];

    if (abs(b[l] - a[j]) <= k)
    {
      ans++;
      j++;
      l++;
    }
    else if (b[l] - a[j] > k)
    {
      j++;
    }
    else
    {
      l++;
    }
  }
  // cout << "\n";
  cout << ans;
}