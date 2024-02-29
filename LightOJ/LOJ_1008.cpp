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
    long long second, n, median, offset;
    cin >> second;
    n = ceil(sqrt(second));
    median = ((n * n) + ((n - 1) * (n - 1)) + 1) / 2;
    offset = second - median;
    if (offset == 0)
    {
      cout << "Case " << t << ": " << n << " " << n << "\n";
    }
    else if ((n % 2 == 0 && offset > 0) || (n % 2 == 1 && offset < 0))
    {
      cout << "Case " << t << ": " << n << " " << n - abs(offset) << "\n";
    }
    else if ((n % 2 == 0 && offset < 0) || (n % 2 == 1 && offset > 0))
    {
      cout << "Case " << t << ": " << n - abs(offset) << " " << n << "\n";
    }
  }
}