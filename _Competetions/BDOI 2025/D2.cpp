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

    for (int i = 0; i < N; i++)
      cin >> A[i];

    for (int i = 0; i < N; i++)
    {
      multiset<ll> min;

      for (int j = i; j < N; j++)
      {
        min.insert(A[j]);
        if (min.size() > 1)
        {
          maxsum = max(maxsum, ((j - i + 1) * (*min.begin() + *next(min.begin()))));
        }
        else
        {
          maxsum = max(maxsum, A[i]);
        };
      }
    }

    cout << maxsum << "\n";
  }
}