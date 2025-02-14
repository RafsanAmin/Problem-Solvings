#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{

  return a.second < b.second;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  vector<pair<int, int>> ranges;
  vector<pair<int, int>> sr_f;
  vector<pair<int, int>> sr_s;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    ranges.push_back({x, y});
    sr_f.push_back({x, y});
    sr_s.push_back({x, y});
  }

  sort(sr_f.begin(), sr_f.end());
  sort(sr_s.begin(), sr_s.end(), cmp);

  for (int i = 0; i < n; i++)
  {
    int l = ranges[i].first, r = ranges[i].second;

    auto startIdx1 = lower_bound(sr_f.begin(), sr_f.end(), l);
    auto endIdx1 = prev(upper_bound(sr_s.begin(), sr_s.end(), r));
  }
}