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
    const double PI = 2 * acos(0.0);
    double radius, ans;
    cin >> radius;
    ans = ((4 * radius * radius) - (PI * radius * radius));
    cout
        << "Case " << t << ": ";
    cout << fixed << setprecision(2) << ans << '\n';
  }
}