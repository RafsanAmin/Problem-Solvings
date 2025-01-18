#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, curr = 0, mx = -1;
  cin >> n;

  vector<pair<int, int>> in;

  for (int i = 0; i < n; i++)
  {
    int s, e;
    cin >> s >> e;
    in.push_back({s, 1});
    in.push_back({e, -1});
  }

  sort(in.begin(), in.end());

  for (pair<int, int> x : in)
  {
    curr += x.second;
    mx = max(curr, mx);
  }

  cout << mx;
}