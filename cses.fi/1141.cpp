#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, ans = 0;
  cin >> n;
  vector<int> nums(n);
  map<int, int> mp;

  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  int j = 0, k = 0;

  while (k < n)
  {

    if (mp.find(nums[k]) == mp.end())
    {
      mp.insert({nums[k], k});
    }
    else
    {
      if (mp[nums[k]] >= j)
        j = mp[nums[k]] + 1;
      mp[nums[k]] = k;
    }
    
    ans = max(k - j + 1, ans);
    k++;
  }

  cout << ans;
}