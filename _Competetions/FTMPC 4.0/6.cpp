#include <bits/stdc++.h>

using namespace std;

double solve_quadratic(double a, double b, double c, char type)
{
  if (type == '+')
  {
    return (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
  }
  else
  {
    return (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int ti = 1; ti <= T; ti++)
  {

    double p, q, t, m;
    cin >> p >> q >> t;
    if (p == q)
    {
      m = .5;
    }
    else
    {
      m = solve_quadratic(q - p, 2 * p, -p, '+');
    }
    cout << fixed << setprecision(8) << ((p / m) + (q / (1 - m))) / t << "\n";
  }
}