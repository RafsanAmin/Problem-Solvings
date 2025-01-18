#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, x, ans = 0;
  cin >> n >> x;

  vector<int> p;

  for (int l = 0; l < n; l++)
  {
    int temp;
    cin >> temp;
    p.push_back(temp);
  }

  sort(p.begin(), p.end());

  int i = 0, j = n - 1;

  while (i < j)
  {
    if (p[i] + p[j] <= x)
    {
      ans++;
      i++;
      j--;
    }
    else
    {
      j--;
    }
  }

  int rem = n - 2 * ans;

  cout << ans + rem;
}