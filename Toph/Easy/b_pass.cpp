#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;

  cin >> s;

  s[0] = toupper(s[0]);

  replace(s.begin(), s.end(), 's', '$');
  replace(s.begin(), s.end(), 'i', '!');

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'o')
    {
      s[i] = ')';
      s.insert(i, "(");
    }
  }

  s.append(".");

  cout << s;
}