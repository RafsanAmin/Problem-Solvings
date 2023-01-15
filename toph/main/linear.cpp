#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T, a, b, N;
  float xMax, yMax;

  cin >> T;

  while (T-- != 0)
  {
    cin >> N, a, b;

    xMax = N / a;
    yMax = N / b;

    if (fmod(xMax, 1.0) == 0 && fmod(yMax, 1.0) == 0)
    {
      cout << round(0.5 * (floor(xMax) + 1.5) * (floor(yMax) + 1.5)) + 1 << endl;
    }
    else
    {
      cout << (yMax + 1 + ceil(xMax) / 2) * (yMax + 1) << endl;
    }
  }
}