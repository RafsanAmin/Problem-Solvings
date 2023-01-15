#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T;
  int strSize;
  int sum = 0;
  string ans = "";
  string str;

  cin >> T;

  while (T-- != 0)
  {
    cin >> strSize;
    cin >> str;

    sum += (static_cast<int>(str[0]) - 48);

    for (int i = 1; i < strSize; i++)
    {
      sum += (static_cast<int>(str[i]) - 48);

      if (sum <= 1)
      {
        ans += "+";
      }
      else
      {
        ans += "-";
        sum -= 2;
      }
    }
    cout << ans << endl;
    sum = 0;
    ans = "";
  }
}