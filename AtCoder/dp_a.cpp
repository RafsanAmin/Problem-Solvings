#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  vector<int> h(N);
  vector<int> dp(N, 1E9 + 2);

  for (int i = 0; i < N; i++)
    cin >> h[i];

  dp[0] = 0;

  for (int i = 1; i < N; i++)
  {
    if (i - 1 >= 0)
      dp[i] = min(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));

    if (i - 2 >= 0)
      dp[i] = min(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
  }

  cout << dp[N - 1];
}