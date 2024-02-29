#include <bits/stdc++.h>

using namespace std;

double getVolume(double r1, double r2, double h)
{
  return ((1.0 / 3.0) * 3.141592653589793238462643383279502884197 * h * ((r1 * r1) + (r1 * r2) + (r2 * r2)));
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    double r1, r2, h, p;
    cin >> r1 >> r2 >> h >> p;
    cout << "Case " << t << ": " << fixed << setprecision(9) << getVolume(((p / h) * (r1 - r2)) + r2, r2, p) << "\n";
  }
}