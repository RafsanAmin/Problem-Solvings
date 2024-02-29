#include <iostream>
#include <string>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string number;
  int s, l, x = 0;

  cin >> number;

  l = number.length();

  s = l % 3;

  if (s == 0)
    s = 3;

  for (int i = s; i < l; i += 3)
  {
    number.insert(number.begin() + i + x, ',');
    x++;
  }

  cout << number;
}