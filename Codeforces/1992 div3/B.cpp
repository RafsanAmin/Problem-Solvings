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
    int n, k;
    int sum = 0;
    int cut = 0;
    int maxm = 0;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
      int temp;
      cin >> temp;
      sum += temp;
      cut += (temp - 1);
      maxm = max(temp, maxm);
    }
    cout << sum + cut - maxm - maxm + 1 << "\n";
  }
}