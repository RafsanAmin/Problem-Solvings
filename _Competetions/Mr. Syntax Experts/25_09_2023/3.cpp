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
    // write your code here
    int range;
    cin >> range;
    vector<int> perf;

    for (int i = 6; i <= range; i++)
    {
      int sum_of_div = 1;
      for (int j = 2; j * j <= i; j++)
      {
        if (i % j == 0)
        {
          sum_of_div += j;
          sum_of_div += i / j;
        }
      }
      if (sum_of_div == i)
      {
        perf.push_back(i);
      }
    }
    for (int x : perf)
    {
      cout << x << endl;
    }
    cout << endl;
  }
}