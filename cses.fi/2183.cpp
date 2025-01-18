#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, X = 0;
  cin >> n;
  vector<ll> numbers(n);
  for (int i = 0; i < n; i++)
  {
    cin >> numbers[i];
  }

  sort(numbers.begin(), numbers.end());

  for (ll i = 0; i < n; i++)
  {
    if (numbers[i] > X + 1)
    {
      break;
    }
    X += numbers[i];
  }

  cout << X + 1;
}