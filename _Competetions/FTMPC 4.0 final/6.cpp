#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    int n, m;
    string s;
    cin >> n >> m;
    cin >> s;
    unordered_map<char, vector<int>> map;
    for (int x = 0; x < s.size(); x++)
    {
      map[s[x]].push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
      int q;
      cin >> q;
      if (q == 1)
      {
        int i;
        char c;
        cin >> i >> c;
        s[i] = c;
      }
      else
      {
        int l, r;
        string sub;
      }
    }
  }
}