#include <iostream>
using namespace std;

class A {
  public:
    virtual void print() {
      cout << "A::print()" << endl;
    }
};

class B: public A {
  public:
    virtual void print() {
      cout << "B::print()" << endl;
    }
};

class D: public A {
  public:
    virtual void print() {
      cout << "D::print()" << endl;
    }
};

class E: public B {
  public:
    virtual void print() {
      cout << "E::print()" << endl;
    }
};

int main() {
  A a;
  B b;
  D d;
  E e;
  A *pa = &a;
  B *pb = &b;
  pa->print();
  pa = pb;
  pa->print();
  pa = &d;
  pa->print();
  pa = &e;
  pa->print();

  return 0;
}