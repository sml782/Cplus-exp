// 不仅能在成员函数中调用虚函数, 也可以在构造函数和析构函数中调用虚函数，但这样调用的虚函数不是多态的.

#include <iostream>
using namespace std;

class A {
  public:
    virtual void hello() {
      cout << "A::hello()" << endl;
    }

    virtual void bye() {
      cout << "A::bye()" << endl;
    }
};

class B: public A {
  public:
    virtual void hello() {
      cout << "A::hello()" << endl;
    }

    B() {
      hello();
    }

    ~B() {
      bye();
    }
};

class C: public B {
  public:
    virtual void hello() {
      cout << "A::hello()" << endl;
    }
};

int main() {
  C obj;
  return 0;
}