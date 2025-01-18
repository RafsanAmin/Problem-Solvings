#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

bitset<10000000> marks(0);
vector<ll> primes;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin >> n;
  marks[1].flip();
  for (ll i = 2; i * i < 10000000; i++)
  {
    if (!marks[i])
    {
      for (ll j = i * i; j < 10000000; j += i)
      {

        if (!marks[j])
        {

          marks[j].flip();
        }
      }
    }
  }

  for (ll i = 2; i < 10000000; i++)
  {
    if (!marks[i])
    {

      primes.push_back(i);
    }
  }
  cout << primes[n - 1];
}