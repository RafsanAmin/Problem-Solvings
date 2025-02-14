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
    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
      cin >> num[i];
    }
    sort(num.begin(), num.end());

    // cout << "prpr  ";
    // for (int x : num)
    // {
    //   cout << x << " ";
    // }

    // cout << "\n";

    int j = 0, l = n - 1;

    while (j < l)
    {
      // cout << num[j] << " " << num[l] << "\n";
      if (num[j] + num[l] == k)
      {
        ans++;
        j++;
        l--;
      }
      else if (num[j] + num[l] > k)
      {
        l--;
      }
      else
      {
        j++;
      }
    }

    cout << ans << "\n";
  }
}