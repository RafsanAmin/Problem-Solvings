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
  long long int limN, t;
  std::random_device rd;

  /* Random number generator */
  std::default_random_engine generator(rd());

  /* Distribution on which to apply the generator */
  std::uniform_int_distribution<long long unsigned> distribution(0, 0xFFFFFFFFFFFFFFFF);

  cin >> limN >> t;
  Inpt << t << "\n";
  for (long long int T = 0; T < t; T++)
  {
    long long int N = 0 + distribution(generator) % (limN);
    long long int ans = ((N / 3) * 2) + (N % 3 != 0);
    Inpt << N << "\n";
    Otpt << ans << "\n";
  }
  Inpt.close();
  Otpt.close();
}