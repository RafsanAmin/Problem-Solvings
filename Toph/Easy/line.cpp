#include <bits/stdc++.h>

using namespace std;

bool insdeCheck(pair<int, int> &bound, pair<int, int> &t)
{
  if ((t.first >= bound.first && t.first <= bound.second) || (t.second >= bound.first && t.second <= bound.second) || (t.first <= bound.first && t.second >= bound.second))
  {
    return true;
  }
  return false;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N, M;
  vector<pair<int, int>> lines;

  cin >> N >> M;
  for (int i = 0; i < N; i++)
  {
    int l, r;
    cin >> l >> r;
    lines.push_back({min(l, r), max(l, r)});
  }
  for (int m = 0; m < M; m++)
  {
    pair<int, int> bound = {0, 0};
    int cnt = 0;
    cin >> bound.first >> bound.second;
    if (bound.first > bound.second)
    {
      swap(bound.first, bound.second);
    }
    for (int i = 0; i < N; i++)
    {
      if (insdeCheck(bound, lines[i]))
      {
        cnt++;
      }
    }
    cout << cnt << "\n";
  }
}