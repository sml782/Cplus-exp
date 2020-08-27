#include <iostream>
using namespace std;

class A {
  private:
    int a;
  public:
    virtual void print() = 0;
    void func() {
      cout << "func()" << endl;
    }
};

class B: public A {
  public:
    void print() {
      cout << "B::print()" << endl;
    }
    void func() {
      cout << "B::func()" << endl;
    }
};

int main() {
  // A a; // ! 错误, 抽象类不能实例化
  // A *p = new A; // ! 错误, 不能创建类A的实例
  // A a[2]; // ! 错误, 不能声明抽象类数组

  A *pa = new B;
  pa->print(); // 多态, 调用 B

  B b;
  A *pc = &b;
  pc->func(); // 不是虚函数, 调用 A
}