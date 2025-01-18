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
    int n, k;
    cin >> n >> k;
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
      string temp;
      cin >> temp;
      s.push_back(temp);
    }
    for (int i = 0; i < n; i += k)
    {
      for (int j = 0; j < n; j += k)
      {
        cout << s[i][j];
      }
      cout << "\n";
    }
  }
}