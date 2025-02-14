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
    int n, m, c = 0;
    bool x = false;
    cin >> n >> m;

    vector<pair<int, int>> play;
    vector<int> sequence;
    vector<int> checked(n, 0);

    for (int i = 1; i <= n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        int temp;
        cin >> temp;
        play.push_back({temp, i});
      }
    }

    sort(play.begin(), play.end());

    for (int i = 0; i < n; i++)
    {
      sequence.push_back(play[i].second);

      if (checked[play[i].second - 1] < 1)
      {
        checked[play[i].second - 1]++;
        c++;
      }
    }

    for (int i = 0; i < n; i++)
    {

      sequence.push_back(play[i].second);
    }

    if (c < n)
    {
      x = true;
    }

    for (int i = n; i < n * m; i++)
    {
      // cout << play[i].first << " " << sequence[i % n] << " " << play[i].second << "----\n";

      if (sequence[i % n] != play[i].second)
      {
        x = true;
        break;
      }
    }

    if (x)
    {
      cout << -1;
    }
    else
    {
      for (int i = 0; i < n; i++)
      {
        cout << sequence[i] << " ";
      }
    }

    cout << "\n";
  }
}