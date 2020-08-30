// ! `freopen()`: 将 stream 按 mode 指定的模式重定向到路径 `path` 指向的文件

#include <iostream>

using namespace std;

int main() {
  int x;
  int y;
  cin >> x >> y;
  // fopen("test.txt", "w");
  freopen("./testfile/test.txt", "w", stdout);
  if (y == 0) {
    cerr << "error." << endl;
  } else {
    cout << x << " / " << y << " = " << x / y << endl;
  }

  return 0;
}