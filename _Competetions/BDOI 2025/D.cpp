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
    deque<ll> q;

    for (int i = 0; i < N; i++)
      cin >> A[i];

    q.push_back(A[0]);
    min.insert(A[0]);

    for (int i = 1; i < N; i++)
    {
      q.push_back(A[i]);
      min.insert(A[i]);

      sum = q.size() * (*min.begin() + *(next(min.begin())));
      // cout << *min.begin() << " " << *(next(min.begin())) << " " << sum << "\n";
      maxsum = max(maxsum, sum);

      while (!q.empty())
      {
        ll frval = q.front();

        min.erase(min.find(q.front()));
        q.pop_front();

        if (q.size() == 1)
        {
          sum = q.front();
          maxsum = max(sum, maxsum);
          break;
        }
        else
        {
          cout << (q.size()) << " " << *min.begin() << " " << (*(next(min.begin()))) << " " << sum << "\n";

          if (((q.size()) * (*min.begin() + *(next(min.begin())))) >= sum)
          {
            q.pop_front();
            sum = q.size() * (*min.begin() + *(next(min.begin())));
            maxsum = sum;
          }
          else
          {
            min.insert(frval);
            q.push_front(frval);
            break;
          }
        }
      }
    }

    cout << maxsum << "\n";
  }
}