#include <bits/stdc++.h>

using namespace std;

int isPrime(int num)
{
  if (num == 1 || num == 2)
  {
    return false;
  }
  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      return false;
      break;
    }
  }

  return true;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> num;
  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;

    if (isPrime(temp))
    {
      cout << 1;
      return 0;
    }
  }
  cout << 0;
}