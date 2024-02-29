#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
  if (n == 2)
    return true;
  if (n % 2 == 0 || n == 1)
    return false;
  for (int i = 3; i * i <= n; i += 2)
  {
    if (n % i == 0)
    {
      return false;
      break;
    }
  }
  return true;
}

int main()
{
  int T;
  cin >> T;
  while (T-- != 0)
  {
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
      isPrime(i) ? count++ : 0;
    }
    cout << count << endl;
  }
}