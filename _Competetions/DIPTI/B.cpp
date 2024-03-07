#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  int W = 0, L = 0, T = 0;
  string s;
  cin >> s;
  for (int x : s)
  {
    if (x == 'W')
      W++;
    else if (x == 'L')
      L++;
    else if (x == 'T')
      T++;
  }
  cout << W << " " << L << " " << T;
  return 0;
}
