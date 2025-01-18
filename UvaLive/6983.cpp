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
    int N;
    bool ans = true;
    vector<int> dolls;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
      int temp;
      cin >> temp;
      dolls.push_back(temp);
    }
    for (int i = 0; i < N - 1; i++)
    {
      if (dolls[i] == dolls[i + 1])
      {
        ans = false;
        break;
      }
    }
    cout << (ans ? "YES\n" : "NO\n");
  }
}