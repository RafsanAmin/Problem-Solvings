#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int r, e, ans = 0;

  cin >> r >> e;

  vector<string> field(r, "");

  for (int i = 0; i < r && e != 0; i++)
  {
    cin >> field[i];
  }
  for (int i = 0; i < r && e != 0; i++)
  {
    for (int j = 0; j < e; j++)
    {
      bool a = false, b = false, c = false, d = false;
      if (i - 1 < 0)
        a = true;
      else if (field[i - 1][j] == '.')
        a = true;

      if (j - 1 < 0)
        b = true;
      else if (field[i][j - 1] == '.')
        b = true;

      if (i + 1 >= r)
        c = true;
      else if (field[i + 1][j] == '.')
        c = true;

      if (j + 1 >= e)
        d = true;
      else if (field[i][j + 1] == '.')
        d = true;

      // cout << field[i][j - 1] << endl;
      // cout << "[" << i + 1 << "," << j + 1 << "] " << (a && b && c && d && field[i][j] != '*' ? "> " : "  ") << a << " " << b << " " << c << " " << d << " " << (field[i][j] != '*') << endl;

      if (a && b && c && d && field[i][j] != '*')
        ans++;
    }
  }

  cout << ans;
}