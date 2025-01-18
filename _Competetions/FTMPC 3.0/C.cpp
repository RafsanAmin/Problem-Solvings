#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  double N, Q, logSum = 0;
  cin >> N >> Q;
  vector<double> loggedNum;
  for (int t = 0; t < N; t++)
  {
    double temp;
    cin >> temp;

    temp = log(temp);
    loggedNum.push_back(temp);
  }

  for (int t = 0; t < Q; t++)
  {
    double l, r, p, m, k, ans, comp;
    ;
    cin >> l >> r >> p >> m >> k;
    logSum = 0;
    comp = (k * log(m)) / p;
    for (int i = l - 1; i < r; i++)
    {
      logSum += (loggedNum[i]);
    }

    ans = -1;
    for (int j = r - 1; j >= l; j--)
    {
      logSum -= 2 * loggedNum[j];
      if (logSum >= comp)
      {
        ans = j;
      }
      else
      {
        break;
      }
    }
    if (ans == -1)
      cout << "NO\n";
    else
      cout << "YES\n"
           << ans << '\n';
  }
}