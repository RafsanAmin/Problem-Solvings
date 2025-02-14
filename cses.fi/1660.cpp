#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, x, sum = 0, count = 0;
  cin >> n >> x;

  vector<ll> nums(n);
  vector<ll> p_sum(n + 1);
  p_sum[0] = 0;

  for (ll i = 0; i < n; i++)
  {
    cin >> nums[i];
    sum += nums[i];
    p_sum[i + 1] = sum;
  }

  ll i = 0, j = 1;

  while (i < n + 1 && j < n + 1)
  {
    if (p_sum[j] - p_sum[i] > x)
      i++;
    else if (p_sum[j] - p_sum[i] < x)
      j++;
    else
      count++, i++, j++;
  }

  cout << count;
}