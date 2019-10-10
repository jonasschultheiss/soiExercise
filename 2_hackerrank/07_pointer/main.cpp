#include <stdio.h>

void update(int *a, int *b)
{
  int originalValA = *a;
  *a += *b;
  originalValA <= *b ? *b -= originalValA : *b = originalValA - *b;
}

int main()
{
  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}
