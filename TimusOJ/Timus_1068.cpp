#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, sum;
  cin >> n;
  sum = (abs(n) * (abs(n) + 1)) / 2;
  if (n <= 0)
  {
    cout << 1 - sum;
  }
  else
  {
    cout << sum;
  }
}