#include <bits/stdc++.h>

using namespace std;

int calculations = 0;
vector<pair<int, int>> operations;
void selection(string &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    int max_idx = i;
    for (int j = i + 1; j < arr.size(); j++)
    {

      if (arr[j] > arr[max_idx])
      {
        max_idx = j;
      }
    }
    if (max_idx != i)
    {
      swap(arr[max_idx], arr[i]);
      calculations++;
      operations.push_back({i, max_idx});
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    int N, sum = 0;
    calculations = 0;
    operations.clear();
    string s;
    cin >> s;
    selection(s);
    for (char x : s)
    {
      sum += static_cast<int>(x - 'A' + 1);
    }
    cout << "Case " << t << ":\n"
         << sum << "\n"
         << calculations << "\n";

    for (int i = 0; i < operations.size(); i++)
    {
      cout << operations[i].first + 1 << " " << operations[i].second + 1 << "\n";
    }
  }
}