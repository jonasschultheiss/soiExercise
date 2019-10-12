#include <soi>

signed main() {
  int a,b,c;
  cin >> a >> b >> c;

  if (a == 0) {
    cout << b+c;
  } else if (a ==1) {
    cout << b-c;
  } else {
    cout << b*c;
  }
}
