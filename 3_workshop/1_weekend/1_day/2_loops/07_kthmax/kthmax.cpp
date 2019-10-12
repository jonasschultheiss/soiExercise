#include <soi>

signed main() {
  int n, k;
  std::cin >> n >> k;
  vector<int> arr(k+1,0);
  int num;
  for (int i = 0; i < n; ++i) {
    std::sort(arr.begin(), arr.end(), greater<int>());
    num = read_int();
    if (arr[k] < num) {
      arr[k] = num;
    }
  }

  std::sort(arr.begin(), arr.end(), greater<int>());
  std::cout << arr[k];
}

// int n, k;
//   std::cin >> n >> k;
//   int arr[n];
//   for (int i = 0; i < n; ++i) {
//     arr[i] = read_int();
//   }
//   int size = sizeof(arr)/sizeof(arr[0]); 
//   std::sort(arr, arr+size, greater<int>());
//   std::cout << arr[k];