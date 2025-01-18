#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> &a, pair<int, int> &b)
{
  return a.second > b.second;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    int n, k;
    cin >> n >> k;

    unordered_map<int, int> arr;

    for (int i = 0; i < k; i++)
    {
      int bi, ci;
      cin >> bi >> ci;
      arr[bi] += ci;
    }

    vector<pair<int, int>> v(arr.begin(), arr.end());

    sort(v.begin(), v.end(), comp);

    int sum = 0;
    for (int i = 0; i < min(n, static_cast<int>(v.size())); i++)
    {
      sum += v[i].second;
    }

    cout << sum << "\n";
  }
}