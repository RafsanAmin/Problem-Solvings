#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s, ne;
  char middle = '*';
  bool hasSol = true;
  cin >> s;
  int n = s.length();

  sort(s.begin(), s.end());

  ne.resize(n);

  if (n % 2 == 0)
  {
    for (int i = 0, j = 0; i < n; i += 2, j++)
    {
      if (s[i] == s[i + 1])
      {
        ne[j] = ne[n - j - 1] = s[i];
      }
      else
      {
        hasSol = false;
        break;
      }
    }
  }
  else
  {
    for (int i = 0, j = 0; i < n; i += 2, j++)
    {

      if (s[i] == s[i + 1])
      {
        ne[j] = ne[n - j - 1] = s[i];
      }
      else if (middle == '*')
      {
        middle = s[i];
        i--;
        j--;
      }
      else
      {
        hasSol = false;
        break;
      }
    }

    ne[n / 2] = middle;
  }

  if (hasSol)
  {
    cout << ne;
  }
  else
  {
    cout << "NO SOLUTION";
  }
}