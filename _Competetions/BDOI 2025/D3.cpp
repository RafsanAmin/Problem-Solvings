#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    ll N, sum = 0, maxsum = 0;
    cin >> N;
    vector<ll> A(N);
    multiset<ll> min;

    for (int i = 0; i < N; i++)
    {

      cin >> A[i];
      min.insert(A[i]);
    }

    if (min.size() > 1)
    {

      cout << (N * (*min.begin() + *next(min.begin()))) << "\n";
    }
    else
    {
      cout << N * (*min.begin());
    }
  }
}