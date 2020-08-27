#include <iostream>
using namespace std;

template <class T>
class TestClass {
  public:
    T buffer[10];
    T getData(int);
};

template <typename T>
T TestClass<T>::getData(int j) {
  return *(buffer + j);
}

int main() {
  TestClass<char> instA;
  int i;
  char cArr[6] = "abcde";
  for (i = 0; i < 5; i ++) {
    instA.buffer[i] = cArr[i];
  }
  for (i = 0; i < 6; i++) {
    double res = instA.getData(i);
    cout << res << " ";
  }
  cout << endl;

  TestClass<double> instB;
  double fArr[6] = {12.1, 23.2, 34.3, 45.4, 56.5, 67.6};
  for (i = 0; i < 6; i++) {
    instB.buffer[i] = fArr[i] - 10;
  }
  for (i = 0; i < 6; i++) {
    double res = instB.getData(i);
    cout << res << " ";
  }
  cout << endl;

  return 0;
}