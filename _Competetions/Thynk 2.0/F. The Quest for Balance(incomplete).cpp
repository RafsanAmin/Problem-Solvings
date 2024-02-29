#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T-- != 0)
  {
    int n, left = 0, right = 0, ans = -1;
    vector<int> number;
    cin >> n;
    number.push_back(0);

    if (n == 2)
    {
      cout << ans;
      return 0;
    }

    for (int i = 0; i < n; i++)
    {
      int temp;
      cin >> temp;
      number.push_back(temp);
    }
    number.push_back(0);

    for (int i = 1; i < n + 1; i++)
    {
      right += number[i];
    }

    for (int i = 1; i < n + 1; i++)
    {
      left += number[i - 1];
      right -= number[i];
      if (left == right)
      {
        ans = i;
        break;
      }
    }
    cout << (ans == -1 ? -1 : ans - 1) << endl;
  }
}