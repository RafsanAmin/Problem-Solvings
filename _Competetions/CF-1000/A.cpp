#include <bits/stdc++.h>

using namespace std;

int draws = 0;
vector<int> player(3);

int getDraw(int sum)
{
  sort(player.begin(), player.end());
  if (player[0] == 0 && player[1] == 0)
  {
    return sum;
  }
  player[2]--;
  player[1]--;
  return getDraw(sum + 1);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    draws = 0;
    cin >> player[0] >> player[1] >> player[2];
    int ans = getDraw(0);
    if (player[2] % 2 != 0)
    {
      cout << -1;
    }
    else
    {
      cout << ans;
    }
    cout << "\n";
  }
}