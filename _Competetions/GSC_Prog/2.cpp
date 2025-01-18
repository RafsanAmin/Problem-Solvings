#include <bits/stdc++.h>

using namespace std;

int toInt(int x)
{
  return static_cast<int>(x) - 48;
}

char toChar(char x)
{
  return static_cast<char>(x + 48);
}

string bignumsum(string &a, string &b)
{
  int A = a.size(),
      B = b.size();

  int mn = min(A, B);
  int mx = max(A, B);
  int carry = 0;
  string sum = "";

  for (int i = 0; i < mx; i++)
  {

    int s = 0;
    if (i + 1 > mn)
    {
      s = toInt(A > B ? a[i] : b[i]) + carry;
    }
    else
    {
      s = toInt(a[i]) + toInt(b[i]) + carry;
    }

    sum.push_back(toChar(s - ((s / 10) * 10)));
    carry = s / 10;

    if (i == mx - 1 && carry > 0)
    {
      sum.push_back(toChar(carry));
    }
  }

  return sum;
}

string singleToManyCalc(string &s, int b)
{
  int size = s.size();
  int carry = 0;

  string sum;

  for (int i = 0; i < size; i++)
  {

    int k = 0;
    k = toInt(s[i]) * b + carry;

    sum.push_back(toChar(k - ((k / 10) * 10)));
    carry = k / 10;

    if (i == size - 1 && carry > 0)
    {
      sum.push_back(toChar(carry));
    }
  }

  return sum;
}

// int cast()

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string A, B;

  cin >> A >> B;

  if (A == "0" || B == "0")
  {
    cout << "0";
  }
  else
  {
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    int a = A.size(), b = B.size();
    int mn = min(a, b), mx = max(a, b);
    vector<string> sanss;

    for (int i = 0; i < mn; i++)
    {
      string s;
      int k = toInt(a < b ? A[i] : B[i]);

      string sans = singleToManyCalc(A, k);
      string aa = "";

      for (int l = 0; l < i; l++)
      {
        aa.push_back('0');
      }
      sanss.push_back(aa + sans);
    }

    string sum = "0";

    for (string x : sanss)
    {
      sum = bignumsum(x, sum);
    }

    reverse(sum.begin(), sum.end());

    cout << sum;
  }
}