#include <bits/stdc++.h>

using namespace std;

int main()
{
  for (int i = 1000; i >= 1; i--)
  {
    cout << i;
    if ((i - 1) % 5 == 0)
    {
      cout << endl;
    }
    else
    {
      cout << " ";
    }
  }
}