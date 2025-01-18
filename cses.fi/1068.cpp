#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n;
  cin >> n;
  while (1)
  {
    if (n == 1)
    {
      cout << 1;
      break;
    }
    cout << n << " ";
    if (n % 2 == 0)
      n /= 2;
    else
      n = (n * 3) + 1;
  }
}