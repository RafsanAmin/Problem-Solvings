#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

void print_queue(queue<ll> q)
{
  while (!q.empty())
  {
    std::cout << q.front() << " ";
    q.pop();
  }
  std::cout << std::endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, k, count = 0, dis = 0;
  cin >> n >> k;
  vector<ll> v(n);
  queue<ll> q;
  map<ll, ll> distinct_c;

  for (ll i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  for (ll i = 0; i < n; i++)
  {

    if (distinct_c[v[i]] <= 0)
    {
      dis++;
    }
    distinct_c[v[i]]++;
    q.push(v[i]);
    ll fr = q.front();

    if (dis > k)
    {
      while (dis > k)
      {
        distinct_c[q.front()]--;
        if (distinct_c[q.front()] <= 0)
        {
          dis--;
        }
        q.pop();
      }
    }

    // print_queue(q);
    count += q.size();
  }

  cout << count;
}