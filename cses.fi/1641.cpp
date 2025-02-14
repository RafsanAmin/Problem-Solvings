#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  bool found = false;
  ll n, x, c = 0;
  cin >> n >> x;
  vector<pair<ll, ll>> nums(n);

  for (int i = 0; i < n; i++)
  {
    cin >> nums[i].first;
    nums[i].second = i + 1;
  }

  sort(nums.begin(), nums.end());

  for (int i = 0; i < n; i++)
  {
    c = x - nums[i].first;

    int j = i + 1, k = n - 1;

    while (j < k)
    {
      // cout << nums[j] << " " << nums[k] << "::";

      if (nums[j].first + nums[k].first > c)
      {
        k--;
      }
      else if (nums[j].first + nums[k].first < c)
      {
        j++;
      }
      else
      {
        found = true;
        break;
      }
    }

    if (found)
    {
      cout << nums[i].second << " " << nums[j].second << " " << nums[k].second;
      break;
    }
  }

  if (!found)
  {
    cout << "IMPOSSIBLE";
  }
}