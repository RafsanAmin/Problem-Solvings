#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n, sum = 0;
  vector<int> number;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    number.push_back(temp);
  }

  for (int i = 1; i < n; i++)
  {
    if (number[i] < number[i - 1])
    {
      sum += (number[i - 1] - number[i]);
      number[i] += (number[i - 1] - number[i]);
    }
  }

  cout << sum;
}