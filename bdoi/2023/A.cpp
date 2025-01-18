#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, mx = 0, c = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    ll temp, omx = mx;
    cin >> temp;

    mx = max(temp, mx);

    if (omx != mx)
    {
      c = 0;
    }

    if (mx == temp)
    {
      c++;
    }
  }

  cout << (++c);
}