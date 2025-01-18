#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    int sessions;
    double operations = 0;
    vector<double> sessionArray;
    cin >> sessions;
    for (int i = 0; i < sessions; i++)
    {
      double temp;
      cin >> temp;
      sessionArray.push_back(temp);
    }

    for (int i = 0; i < sessions; i++)
    {
      operations += (ceil(log2(sessionArray[i])) * 2) + 1;
    }
    cout << operations << "\n";
  }
}