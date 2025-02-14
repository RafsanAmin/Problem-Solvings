#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;

  cin >> n;

  vector<pair<pair<int, int>, int>> ranges(n);
  priority_queue<pair<int, int>> pq;
  vector<int> ans(n);
  int last_room = 0;

  for (int i = 0; i < n; i++)
  {
    int l, r;
    cin >> l >> r;
    ranges[i] = {{l, r}, i};
  }

  sort(ranges.begin(), ranges.end());

  for (int i = 0; i < n; i++)
  {
    if (pq.empty() || -pq.top().first >= ranges[i].first.first)
    {
      last_room++;
      pq.push({-ranges[i].first.second, last_room});
      ans[ranges[i].second] = last_room;
    }
    else
    {
      pair<int, int> top = pq.top();
      pq.pop();
      pq.push({-ranges[i].first.second, top.second});
      ans[ranges[i].second] = top.second;
    }
  }

  cout << last_room << "\n";
  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }
}