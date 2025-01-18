#include <bits/stdc++.h>

using namespace std;

bitset<1000000> nums;
vector<pair<int, int>> primes;

void sieve(int n)
{
  nums[1] = 1;
  for (int i = 2; i * i < n; i++)
  {
    if (!nums[i])
    {
      for (int j = i * i; j < n; j += i)
      {
        nums[j] = 1;
      }
    }
  }
  for (int i = 2; i < n; i++)
  {
    if (!nums[i])
    {
      primes.push_back({i, 0});
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, k, i = 0;
  cin >> n;
  sieve(n + 100);
  k = n;
  while (k > 1)
  {
    if (k % primes[i].first == 0)
    {
      k /= primes[i].first;
      primes[i].second++;
    }
    else
    {
      i++;
    }
  }
  cout << n << " = ";
  for (int j = 0; j <= i; j++)
  {
    if (primes[j].second != 0)
    {

      cout << primes[j].first << " ^ " << primes[j].second << (i == j ? "" : " * ");
    }
  }
}