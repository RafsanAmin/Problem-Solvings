#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ofstream Inpt;
  Inpt.open("./Input.txt");
  ofstream Otpt;
  Otpt.open("./Output.txt");
  srand((unsigned)time(NULL));
  long long int limN, limX, limK, t;
  std::random_device rd;

  /* Random number generator */
  std::default_random_engine generator(rd());

  /* Distribution on which to apply the generator */
  std::uniform_int_distribution<long long unsigned> distribution(0, 0xFFFFFFFFFFFFFFFF);

  cin >> limN >> limX >> limK >> t;
  for (long long int T = 0; T < t; T++)
  {
    long long int N = 0 + distribution(generator) % (limN);
    long long int X = 1 + distribution(generator) % limX;
    long long int K = 2 + distribution(generator) % limK;

    double sum = log(X);
    for (long long int i = 2; i <= N + 1; i++)
    {
      sum += log(i);
    }
    cout << sum << " " << log(K);
    long long int ans = ceil(sum / log(K));

    if (abs(round(sum / log(K)) - sum / log(K)) <= 0.1)
    {
      T--;
    }
    else
    {
      Inpt << N << " " << X << " " << K << "\n";
      Otpt << ans << "\n";
    }
  }

  Inpt.close();
  Otpt.close();
}