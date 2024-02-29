#include <iostream>
#include <iomanip>
#include <vector>

typedef long long int ll;

using namespace std;

int main()
{
  ll N, s = 1;
  vector<ll> primes;

  cin >> N;
  primes.push_back(2);

  for (ll i = 3; s < N; i += 2)
  {
    bool isPrime = true;
    for (int j = 0; primes[j] * primes[j] <= i; j++)
    {
      if (i % primes[j] == 0)
      {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
    {
      primes.push_back(i);
      s++;
    };
  }
  cout << fixed << setprecision(0) << primes[N - 1];

  return 0;
}
