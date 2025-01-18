#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    bitset<1000000> k_list;
    vector<ll> m_list;
    string s = "";
    ll n, m, k, sum = 0, sum_k = 0;

    cin >> n >> m >> k;

    sum = (n * (n + 1)) / 2;

    for (int i = 0; i < m; i++)
    {
      ll temp;
      cin >> temp;
      m_list.push_back(temp);
    }

    for (int i = 0; i < k; i++)
    {
      ll j;
      cin >> j;
      k_list[j].flip();
      sum_k += j;
    }

    for (int i = 0; i < m; i++)
    {
      if (sum - m_list[i] == sum_k - (k_list[m_list[i]] * m_list[i]))
      {
        s += "1";
      }
      else
      {
        s += "0";
      }
    }

    cout << s << "\n";
  }
}