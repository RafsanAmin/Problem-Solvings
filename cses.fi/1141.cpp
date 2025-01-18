#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> nums(n);
  map<int, int> sorted;

  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
    sorted[nums[i]]++;
  }

  int j = 0, l = 0, k = n - 1, r = n - 1;

  while (j >= k)
  {

    j++;
    k--;

    if (sorted[nums[j]]-- > 1)
    {
      l++;
    }

    if (sorted[nums[k]]-- > 1)
    {
      r--;
    }
  }

  cout << r - l + 1;
}