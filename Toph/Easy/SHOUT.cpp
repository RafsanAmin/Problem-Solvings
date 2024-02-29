#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string x, temp = "";
  bool anyL = false;

  getline(cin, x);

  x += " ";

  for (int i = 0; i <= x.length(); i++)
  {
    char y = x[i];
    if (y == ' ')
    {
      if (anyL)
      {
        cout << temp << (i == x.length() - 1 ? "" : " ");
      }
      temp = "";
      anyL = false;
    }
    else
    {
      temp += y;

      if (y >= 'a' && y <= 'z')
      {
        anyL = true;
      }
    }
  }
}
