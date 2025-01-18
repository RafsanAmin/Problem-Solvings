#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  bool okay = true;
  stack<char> brackets;
  cin >> s;
  for (char x : s)
  {
    if (x == '(' || x == '[' || x == '{')
    {
      brackets.push(x);
    }
    else
    {
      // cout << x << " " << brackets.top() << endl;
      if (brackets.empty())
      {
        okay = false;
        break;
      }
      else if ((x == ']' && brackets.top() == '[') || (x == ')' && brackets.top() == '(') || (x == '}' && brackets.top() == '{'))
      {
        brackets.pop();
      }
      else
      {
        okay = false;
        break;
      }
    }
  }
  if (!brackets.empty())
  {
    okay = false;
  }

  cout << (okay ? "Yes" : "No");
}