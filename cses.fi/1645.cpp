#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> nums(n);
  stack<pair<int, int>> stk;

  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (stk.empty())
    {
      cout << "0 ";
    }
    else
    {
      while (1)
      {
        if (!stk.empty())
          if (stk.top().first >= nums[i])
            stk.pop();
          else
            break;
        else
          break;
      }

      if (stk.empty())
      {
        cout << "0 ";
      }
      else
      {
        cout << stk.top().second << " ";
      }
    }
    stk.push({nums[i], i + 1});
  }
}