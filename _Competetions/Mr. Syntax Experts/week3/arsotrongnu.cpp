#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T-- != 0)
  {
    int g;
    string x;

    cin >> g;
    x = to_string(g);

    if ((pow((int)x[0] - '0', 3) + pow((int)x[1] - '0', 3) + pow((int)x[2] - '0', 3)) == (g))
    {
      cout << x << " is an armstrong number!" << endl;
    }
    else
    {
      cout << x << " is not an armstrong number!" << endl;
    }
  }
}