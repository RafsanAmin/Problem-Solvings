#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T-- != 0)
  {
    float xc, yc, r, x, y;

    cin >> xc >> yc;
    cin >> r;
    cin >> x >> y;

    float distance = sqrt(((xc - x) * (xc - x)) + ((yc - y) * (yc - y)));

    cout << (distance <= r ? "The point is inside the circle"
                           : "The point is not inside the circle")
         << "\n";
  }
}