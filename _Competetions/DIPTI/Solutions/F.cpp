#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, sum = 0;
  cin >> n;
  int array[n];
  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    array[i] = temp;
  }
  for (int i = 0; i < n; i++)
  {
    sum += array[i];
  }
  cout << sum;
}