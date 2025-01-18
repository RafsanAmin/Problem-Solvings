#include <bits/stdc++.h>

using namespace std;

const int MOD = 1E9 + 7;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, p = 1;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    p = (p * 2) % MOD;
  }

  cout << p;
}