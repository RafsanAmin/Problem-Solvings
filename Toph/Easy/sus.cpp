#include <bits/stdc++.h>

#define MAX 10000000000

using namespace std;

typedef long long unsigned bigint;
int main()
{
  bigint T, n_div, n_calc, sum, prod, cr, z;
  vector<bigint> div;
  cin >> T;
  for (int t = 0; t < T; t++)
  {
    sum = 0;
    prod = 1;
    // write your code here
    cin >> n_div;
    div.resize(n_div);
    for (int i = 0; i < n_div; i++)
    {
      cin >> div[i];
      prod = prod * div[i];
    }

    cin >> n_calc;

    for (int i = 0; i < n_calc; i++)
    {
      cin >> cr;
      z = (prod / div[cr - 1]);

      if (z > 0 && z < MAX && div[cr - 1] < MAX)
      {
        sum += (z / pow(div[cr - 1], 2));
      }
    }

    cout << "Case #" << t + 1 << ": " << sum << endl;
  }
}