#include <bits/stdc++.h>

using namespace std;

int main()
{

  int N;
  string s;

  cin >> N;
  cin.ignore();
  getline(cin, s);

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] != ' ')
    {
      if (s[i] - N < 97)
      {
        s[i] = 123 + s[i] - N - 97;
      }
      else
      {
        s[i] = s[i] - N;
      }
    }
  }

  cout << s;
}
