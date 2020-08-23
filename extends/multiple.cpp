// ! 多继承
// ! 派生类可访问基类变量|方法

#include <iostream>
using namespace std;

class Base1 {
  public:
    int a;
    Base1(int x): a(x) {};
    void say() {
      cout << "Class Base1==>a=" << a << endl;
    }
};

class Base2 {
  public:
    int a;
    Base2(int x): a(x) {};
    void say() {
      cout << "Class Base2==>a=" << a << endl;
    }
};

class Derived: public Base1, public Base2 {
  public:
    int a;
    // 基本派生类单独初始化
    Derived(int x, int y, int z): Base1(x), Base2(y), a(z) {};
    void say() {
      cout << "Class Derived==>a=" << a << endl;
    }
    void print3a() {
      cout << "a=" << a << endl;
      // 访问基类变量
      cout << "Base1::a=" << Base1::a << endl;
      cout << "Base2::a=" << Base2::a << endl;
    }
};

int main() {
  Base1 obj1(11);
  obj1.say();
  Derived obj(101, 202, 909);
  obj.say();
  // 调用基类方法
  obj.Base1::say();
  cout << "obj.a=" << obj.a << endl;
  // 访问基类变量
  cout << "obj.Base2::a=" << obj.Base2::a << endl;

  return 0;
}