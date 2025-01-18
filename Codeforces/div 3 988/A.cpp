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
    int n, count = 0;
    vector<int> list;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
      int temp;
      cin >> temp;
      list.push_back(temp);
    }
    for (int i = 0; i < n - 1; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        if (list[i] == list[j] && list[i] > 0 && list[j] > 0)
        {
          count++;
          list[i] = list[j] = -1;
          break;
        }
      }
    }

    cout << count << "\n";
  }
}