#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int x, count = 2;
  cin >> x;

  for (long long int i = 2; i * i <= x; i++)
  {
    if (x % i == 0)
    {
      if (i * i == x)
      {
        count++;
      }
      else
      {
        count += 2;
      }
    }
  }
  if (x == 1)
  {
    cout << 1;
  }
  else
  {
    cout << count;
  }
}