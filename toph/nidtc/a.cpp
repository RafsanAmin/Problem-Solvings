#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num)
{
  int primes[4] = {2, 3, 5, 7};
  int x = 0;

  if (num == 1)
  {
    return false;
  }
  for (int j = 0; j < 4; j++)
  {
    if (num != primes[j] && (num % primes[j]) == 0)
    {
      return false;
      break;
    }
    if (j == 3)
    {
      return true;
    }
  }
}

int main()
{
  int T, G, M;

  string N[2] = {"unset", "unset"}, tN;
  int score[2] = {0, 0};

  cin >> T;
  while (T-- != 0)
  {
    cin >> G;

    N[0] = "unset", N[1] = "unset";
    score[0] = 0, score[1] = 0;

    while (G-- != 0)
    {

      cin >> tN >> M;

      if (N[0] == "unset" || N[0] == tN)
      {
        N[0] = tN;

        isPrime(M)
            ? score[0]++
            : 0;
      }
      else
      {
        N[1] = tN;
        isPrime(M) ? score[1]++ : 0;
      }
    }

    if (score[0] == score[1])
    {
      cout << "Draw!" << endl;
    }
    else if (score[0] > score[1])
    {
      cout << N[0] << endl;
    }
    else
    {
      cout << N[1] << endl;
    }
  }
}