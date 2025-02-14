#include <bits/stdc++.h>

using namespace std;

const int MAX = 1E6;
const int MOD = 1E9 + 7;
vector<int> dp(MAX, -1);

int sol(int n)
{
  if (dp[n] != -1)
    return dp[n];

  if (n == 1)
    return 1;

  int sum = 0;

  for (int i = 0; i < min(n, 6); i++)
  {
    sum += sol(n - i);
  }

  dp[n] = sum;

  return sum;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  cout << sol(n);
}