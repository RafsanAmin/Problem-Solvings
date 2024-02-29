#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T, t = 1;
  cin >> T;
  while (T-- != 0)
  {
    int num, end;

    cin >> num;

    cout << "Case " << t << ": ";

    if (num != 1)
      cout << "1";

    if (num % 2 == 0)
      cout << " 2";

    if (num > 2)
    {
      cout << " ";
      for (int j = 3; j <= (num / 2); j++)
      {
        if (num % j == 0)
        {
          cout << j << " ";
        }
      }
    }

    cout << num << endl;
    t++;
  }
}