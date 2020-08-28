// 多继承中的环继承, 如 A<-B, A<-C, (B, C)<-D
// ! 这种继承会使 基类 A 构建两次, 创建两个对象
// ! 使用虚拟继承解决 virturl

#include <iostream>
using namespace std;

class A {
  public:
    A() {
      cout << "A()" << endl;
    }
    ~A() {
      cout << "~A()" << endl;
    }
  protected:
    int a;
};

class B: virtual public A {
  public:
    B() {
      cout << "B()" << endl;
    }
    ~B() {
      cout << "~B()" << endl;
    }
  protected:
    int b;
};

class C: virtual public A {
  public:
    C() {
      cout << "C()" << endl;
    }
    ~C() {
      cout << "~C()" << endl;
    }
  protected:
    int c;
};

class D: public B, public C {
  public:
    D() {
      cout << "D()" << endl;
    }
    ~D() {
      cout << "~D()" << endl;
    }
  protected:
    int d;
};

int main() {
  cout << "Hello World!" << endl;
  D d;   //D, B, A ,C
  cout << sizeof(d) << endl;
  return 0;
}