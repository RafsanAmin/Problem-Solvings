#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  int size = s.size(), count = 0, max = 1;
  bool counting = false;

  for (int i = 0; i < size; i++)
  {

    if (counting == false)
    {
      counting = true;
      count++;
      continue;
    }
    else
    {
      if (s[i - 1] == s[i])
      {
        count++;
        if (count > max)
        {
          max = count;
        }
        continue;
      }
      else
      {
        count = 0;
        counting = false;
        i--;
      }
    }
  }
  cout << max;
}