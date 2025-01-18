#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, ans = 0, elapsed = 0;
  cin >> N;
  vector<pair<int, int>> time;

  for (int i = 0; i < N; i++)
  {
    int start, end;
    cin >> start >> end;
    time.push_back({end, start});
  }

  sort(time.begin(), time.end());

  for (int i = 0; i < N; i++)
  {
    if (time[i].second >= elapsed)
    {
      ans++;
      elapsed = time[i].first;
    }
  }

  cout << ans;
}