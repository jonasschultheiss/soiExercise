#include <iostream>

using namespace std;

int main()
{
  int T, N, sum;

  cin >> T;

  for (int i = 1; i <= T; i++)
  {
    cin >> N;
    sum = N / 2 * (N / 2 + 1);
    cout << sum << endl;
  }

  return 0;
}