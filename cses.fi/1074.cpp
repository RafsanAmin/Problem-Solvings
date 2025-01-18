#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> arr(n);

  long long int sum = 0, avg, diffsum1 = 0, diffsum2 = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }

  sort(arr.begin(), arr.end());

  for (int i = 0; i < n; i++)
  {
    diffsum1 += abs(arr[i] - arr[n / 2]);
    diffsum2 += abs(arr[i] - arr[(n / 2) + 1]);
  }

  cout << min(diffsum1, diffsum2);
}