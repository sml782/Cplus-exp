#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n = 65535;
  int m = 20;

  // 1) 分别输出一个整数的 十进制 、 十六进制 和 八进制
  cout << "1) " << n << " = " << hex << n << " = " << oct << n << endl;

  // 2) 使用 `setbase(int)` 分别输出一个整数的 十进制 、 十六进制 和 八进制
  cout << "2) " << setbase(10) << m << " = " << setbase(16) << m << " = " << setbase(8) << m << endl;

  // 3) 使用 `showbase` 和 `setbase` 分别输出
  cout << "3) " << showbase; // 显示数值进制的前缀

  cout << setbase(10) << m << "=" << setbase(16) << m << " = " << setbase(8) << m << endl;

  return 0;
}