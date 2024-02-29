#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T-- != 0)
  {
    int c, prev;
    bool back = false, sorted = true;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
      int num;

      cin >> num;
      if (i == 1 && num < prev)
      {
        back = true;
      }
      else if ((i > 1) && ((back && num > prev) || (!back && num < prev)))
      {
        sorted = false;
      }

      prev = num;
    }

    cout << (sorted ? "YES" : "NO") << endl;
  }
}