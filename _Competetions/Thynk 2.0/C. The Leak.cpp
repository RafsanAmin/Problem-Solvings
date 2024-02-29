#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  float V, t1, v1, t2, v2;
  cin >> V >> t1 >> v1 >> t2 >> v2;
  cout << ceil((v2 * (t2 - t1)) / (v1 - v2));
}