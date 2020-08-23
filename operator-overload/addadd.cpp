// ! ++ -- 重点在前置或后置
// ! 1. 前置 - 直接加
// ! 2. 后置 - 保存现有值, 再操作，然后返回旧值

#include <iostream>
using namespace std;

class Test {
  private:
    int n;
  public:
    Test(int);
    // 用于前置形式
    Test &operator++();
    // 用于后置形式
    Test operator++(int);
    // 强制类型转换
    operator int() {
      return n;
    }
    
    // 用于前置形式
    Test &operator--();
    // 用于后置形式
    Test operator--(int);
};

Test::Test(int i): n(i) {}

Test &Test::operator++() {
  n++;
  return *this;
}

Test Test::operator++(int k) {
  // 保存原始值
  Test tmp(*this);
  n++;
  return tmp;
}

Test &Test::operator--() {
  n--;
  return *this;
}

Test Test::operator--(int k) {
  // 保存原始值
  Test tmp(*this);
  n--;
  return tmp;
}

int main() {
  Test d(10);
  cout << "d++ " << d++ << ", ";
  cout << d << endl;
  cout << "++d " << ++d << ", ";
  cout << d << endl;

  cout << "d-- " << d-- << ", ";
  cout << d << endl;
  cout << "--d " << --d << ", ";
  cout << d << endl;

  return 0;
}