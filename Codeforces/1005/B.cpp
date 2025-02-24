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
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> val(n);

    for (int i = 0; i < n; i++)
    {
      cin >> val[i];
      mp[val[i]]++;
    }
  }
}