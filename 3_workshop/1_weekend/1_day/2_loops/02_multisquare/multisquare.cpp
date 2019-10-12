#include <soi>

signed main() {
  int n;
  cin >> n;
  int a;

  for (int i = 1; i <= n; i++) {
    a = read_int();
    print(a*a);
  }
}
