#include <bits/stdc++.h>

using namespace std;

namespace solution
{
  void best()
  {
    long long int x;
    cin >> x;
    long long int z = ((x / 3) * 2) + (x % 3 != 0);
    cout << z << "\n";
  }
  void inefficient()
  {
    int x, N;
    cin >> N;
    x = N;
    int i = 0;
    while (x > 0)
    {
      if (N % 3 == 1)
      {
        x -= ((i % 2 != 0) + 1);
      }
      else
      {
        x -= ((i % 2 == 0) + 1);
      }
      i++;
    }
    cout << i << "\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    solution::best();
  }
}