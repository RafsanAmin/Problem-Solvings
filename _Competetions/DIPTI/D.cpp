#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, total = 0;
  cin >> n;
  vector<int> run;
  for (int k = 0; k < n; k++)
  {
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
      int temp;
      cin >> temp;
      sum += temp;
    }
    run.push_back(sum);
  }

  for (int x : run)
  {
    total += x;
    cout << x << "\n";
  }
  cout << "The Total Run is: " << total;
}