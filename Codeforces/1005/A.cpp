#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    s = '0' + s;

    int z = 0, o = 0;

    for (int i = n; i >= 0; i--)
    {
      if (o > 0 && s[i] == '0')
      {

        if (z > 0)
        {
          cnt += 2;
        }
        else
        {
          cnt++;
        }
        o = 0;
        z = 0;
      }

      if (s[i] == '0')
      {
        z++;
      }
      else
      {
        o++;
      }
    }

    cout << cnt << "\n";
  }
}