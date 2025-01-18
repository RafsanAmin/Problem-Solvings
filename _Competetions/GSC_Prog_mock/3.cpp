#include <bits/stdc++.h>

using namespace std;

float a(float arg)
{

  return arg - floor(arg / 360) * 360;
}

float b(float arg)
{
  if (arg > 180)
  {
    return 360 - arg;
  }
  return arg;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  float h, m, n;

  cin >> h >> m >> n;

  float minrat = (n / m), ma = a(minrat * 360), ha = minrat * (360 / h);

  cout
      << b(abs(ma - ha));
}