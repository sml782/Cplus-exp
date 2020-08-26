#include <iostream>
using namespace std;

class A {
  public:
    virtual void print() {
      cout << "A:print" << endl;
    }
};

class B: public A {
  public:
    virtual void print() {
      cout << "B:print" << endl;
    }
};

void printInfo(A &r) {
  // ! 多态, 使用寄了引用调用哪个 print() 取决于 r 引用了哪个类的对象
  r.print();
}

int main() {
  A a;
  B b;
  printInfo(a);
  printInfo(b);

  return 0;
}