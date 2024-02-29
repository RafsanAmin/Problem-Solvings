#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string A, B;

  getline(cin, A);
  getline(cin, B);

  unordered_map<char, int> traceA, traceB;

  for (char x : A)
    traceA[x]++;

  for (char x : B)
    traceB[x]++;

  for (auto x : traceA)
  {
    if (traceB[x.first] != x.second)
    {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
}