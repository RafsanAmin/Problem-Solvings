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
    int k, mn;
    unordered_map<int, int> map;
    vector<int> list;
    cin >> k;
    mn = k - 2;

    for (int i = 0; i < k; i++)
    {
      int temp;
      cin >> temp;
      list.push_back(temp);

      if (mn % temp == 0)
      {
        map[temp] = i;
      }
    }

    for (int m = 0; m < k; m++)
    {
      if (mn % list[m] == 0 && map.find(mn / list[m]) != map.end())
      {
        int n = map[mn / list[m]];

        if (m == n)
        {
          continue;
        }
        else
        {
          cout << list[m] << " " << list[n] << "\n";
          break;
        }
      }
    }
  }
}