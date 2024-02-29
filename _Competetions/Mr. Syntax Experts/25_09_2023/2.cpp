#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T-- != 0)
  {
    // write your code here
    char c;
    cin >> c;
    if (c >= '0' && c <= '9')
    {
      cout << "Numerical Digit";
    }
    else if (c >= 'A' && c <= 'Z')
    {
      cout << "Uppercase Character";
    }
    else if (c >= 'a' && c <= 'z')
    {
      cout << "Lowercase Character";
    }
    else
    {
      cout << "Special Characters";
    }

    cout << endl;
  }
}