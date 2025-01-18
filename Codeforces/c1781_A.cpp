#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T, w, d, h, x1, y1, x2, y2;
  cin >> T;
  while (T-- != 0)
  {
    // write your code here
    cin >> w >> d >> h;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << min({y1 + abs(x2 - x1) + y2, (2 * d) - y1 + abs(x2 - x1) - y2, x1 + abs(y2 - y1) + x2, (2 * w) - x1 + abs(y2 - y1) - x2}) + h
         << endl;
    ;
  }
}