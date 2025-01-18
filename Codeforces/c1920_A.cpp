#include <bits/stdc++.h>
#define MAX_NUM 2147483647
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T-- != 0)
  {
    int c;
    int minX = 0, maxX = MAX_NUM, omit = 0;
    vector<int> omits;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
      int a, x;
      cin >> a >> x;
      if (a == 1)
      {
        minX = max(x, minX);
      }
      else if (a == 2)
      {
        maxX = min(x, maxX);
      }
      else if (a == 3)
      {
        omits.push_back(x);
      }
    }
    for (int x : omits)
    {
      if (x >= minX && x <= maxX)
      {
        omit++;
      }
    }
    int otpt = maxX - minX - omit + 1;
    // cout << maxX << " " << minX << " " << omit << endl;
    cout << ((otpt < 0) ? 0 : otpt) << endl;
    ;
    // write your code here
  }
}