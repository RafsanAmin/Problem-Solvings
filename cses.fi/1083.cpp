#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n, sum = 0;
  cin >> n;
  for (int i = 0; i < n - 1; i++)
  {
    int temp;
    cin >> temp;
    sum += temp;
  }

  cout << (((n * (n + 1)) / 2) - sum);
}