#include <bits/stdc++.h>

using namespace std;

typedef pair<double, double> point;

double d(point &p1, point &p2)
{
  return (p1.first - p2.first) * (p1.first - p2.first) + (p1.second - p2.second) * (p1.second - p2.second);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  double ans = 12565486500005212121;
  vector<point> points;
  cin >> T;
  for (int t = 0; t < T; t++)
  {
    double x, y;
    cin >> x >> y;
    points.push_back({x, y});
    for (int i = 0; i < t; i++)
    {
      ans = min(ans, d(points[i], points[t]));
    }
  }
  cout << fixed << setprecision(8) << sqrt(ans);
}