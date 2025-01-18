#include <bits/stdc++.h>

using namespace std;

template <typename T>
void print(vector<T> &s)
{
  for (T x : s)
  {
    cout << x << ", ";
  }
  cout << endl;
}

double binary_search_me(vector<double> &up, vector<double> &down, double key, double lo, double hi, double corrUp, double corrDown, double N)
{
  double mid = floor((hi + lo) / 2),
         val = (up[mid] - up[corrUp]) - (down[N - mid] - down[corrDown]),
         val2 = (up[mid - 1] - up[corrUp]) - (down[N - mid + 1] - down[corrDown]);

  if (val >= key && val2 < key)
  {
    return mid;
  }
  else if (hi == lo)
  {
    return 0;
  }
  else if (val >= key && val2 >= key)
  {
    return binary_search_me(up, down, key, lo, mid, corrUp, corrDown, N);
  }
  else if (val < key)
  {
    return binary_search_me(up, down, key, mid + 1, hi, corrUp, corrDown, N);
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  double N, Q;
  cin >> N >> Q;
  vector<double> loggedNum;
  vector<double> cumulativeLoggedNumUp;
  vector<double> cumulativeLoggedNumDown;
  for (int t = 0; t < N; t++)
  {
    double temp;
    cin >> temp;

    temp = log(temp);
    loggedNum.push_back(temp);
    if (t > 0)
    {
      cumulativeLoggedNumUp.push_back(temp + cumulativeLoggedNumUp[t]);
    }
    else
    {
      cumulativeLoggedNumUp.push_back(0);
      cumulativeLoggedNumUp.push_back(temp);
    }
  }

  cumulativeLoggedNumUp.push_back(0);
  cumulativeLoggedNumDown.push_back(0);

  cumulativeLoggedNumDown.push_back(loggedNum[N - 1]);
  for (int t = N - 2; t >= 0; t--)
  {
    cumulativeLoggedNumDown.push_back(loggedNum[t] + loggedNum[t + 1]);
  }
  cumulativeLoggedNumDown.push_back(0);

  print(cumulativeLoggedNumUp);
  print(cumulativeLoggedNumDown);

  for (int t = 0; t < Q; t++)
  {
    double l, r, p, m, k, ans, comp;
    cin >> l >> r >> p >> m >> k;

    comp = (k * log(m)) / p;

    ans = binary_search_me(cumulativeLoggedNumUp, cumulativeLoggedNumDown, comp, l + 1, r - 1, l - 1, N - r, N + 1);

    if (ans == 0)
      cout
          << "NO\n";
    else
      cout << "YES\n"
           << ans << '\n';
  }
}