#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string output;

  if (n == 1)
  {
    output = "one";
  }
  else if (n == 2)
  {
    output = "two";
  }
  else if (n == 3)
  {
    output = "three";
  }
  else if (n == 4)
  {
    output = "four";
  }
  else if (n == 5)
  {
    output = "five";
  }
  else if (n == 6)
  {
    output = "six";
  }
  else if (n == 7)
  {
    output = "seven";
  }
  else if (n == 8)
  {
    output = "eight";
  }
  else if (n == 9)
  {
    output = "nine";
  }
  else
  {
    output = "Greater than 9";
  }

  cout << output;

  return 0;
}
