#include <iostream>
#include <math.h>

using namespace std;

typedef long long int ll;

int main()
{
  int n;
  ll sum = 0;
  cin >> n;
  int nums[100000];
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      sum += abs(nums[i] - nums[j]);
    }
  }
  cout << sum;
}