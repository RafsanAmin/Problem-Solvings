#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, x, m = -1, l = -1;
  cin >> n >> x;
  vector<pair<int, int>> val;
  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    val.push_back({temp, i + 1});
  }
  sort(val.begin(), val.end());

  int j = 0, k = n - 1;

  while (j < k)
  {
    if (val[j].first + val[k].first > x)
    {
      k--;
    }
    else if (val[j].first + val[k].first < x)
    {
      j++;
    }
    else
    {
      m = val[j].second, l = val[k].second;
      break;
    }
  }

  if (m == -1 && l == -1)
  {
    cout << "IMPOSSIBLE";
  }
  else
  {
    cout << min(m, l) << " " << max(m, l);
  }
}