#include <math.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  bool isPalindrome = true;
  cin >> s;
  int size = s.length() - 1;

  for (int i = 0; i <= ceil(size / 2); i++)
  {
    if (s[i] != s[size - i])
    {
      isPalindrome = false;
      break;
    }
  }
  cout << (isPalindrome ? "Yes" : "No");
}