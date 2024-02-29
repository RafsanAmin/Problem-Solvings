#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long double n, rf = sqrt(5), phi = ((1 + rf) / 2);

  cin >> n;

  cout << fixed << setprecision(0) << (n != 0 ? ((pow(phi, n) - pow(1 - phi, n)) / rf) : 0);
}