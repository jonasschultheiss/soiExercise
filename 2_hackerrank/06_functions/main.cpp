#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(const int a, const int b, const int c, const int d)
{
  const int numbers[4] = {a, b, c, d};
  int max = numbers[0];
  for (int i = 1; i < 4; i++)
  {
    if (numbers[i] > max)
      max = numbers[i];
  }

  return max;
}

int main()
{
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int ans = max_of_four(a, b, c, d);
  printf("%d", ans);

  return 0;
}
