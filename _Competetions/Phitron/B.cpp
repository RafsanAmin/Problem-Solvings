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
    int n, prev, miss = 0;
    cin >> n;
    map<int, int> A;

    for (int i = 0; i < n; i++)
    {
      int temp;
      cin >> temp;
      A[temp]++;
    }

    for (int i = 1; i <= n; i++)
    {
      if (A[i] <= 0)
      {
        miss++;
      }
    }

    cout << miss << "\n";
  }
}