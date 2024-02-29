#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  float H, M;
  cin >> H >> M;
  float angle = abs((60 * H - 11 * M) / 2);
  cout << fixed << setprecision(7) << (angle > 180 ? 360 - angle : angle) << "\n";
}