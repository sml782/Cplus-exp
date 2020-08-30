#include <iostream>

using namespace std;

int main() {
  double values[] = {1.23, 20.3456, 300.4567, 4000.45678, 50000.1234567};
  int len = sizeof(values) / sizeof(double);

  cout.fill('*');
  for (int i = 0; i < len; i++) {
    cout << "values[" << i << "] = (";
    cout.width(10);
    cout << values[i] << ")" << endl;
  }

  cout.fill(' ');
  for (int j = 0; j < len; j++) {
    cout << "values[" << j << "] = (";
    cout.width(10);
    cout.precision(j + 3); // 保留有效数字
    cout << values[j] << ")" << endl;
  }

  return 0;
}