#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> arr(n);

  long long int sum = 0, mx = -INFINITY;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    mx = max(sum, mx);
    if (sum < 0)
    {
      sum = 0;
      continue;
    }
  }

  cout << mx;
}