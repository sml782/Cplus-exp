// ! 类强制类型转换
// ! 1.派生类赋值给基类, 再强制转回去原本有的还有
// ! 2.基类直接强制转换, 派生类中属性为默认值,即没有

#include <iostream>
using namespace std;

class Base {
  protected:
    int n;
  public:
    Base(int i): n(i) {
      cout << "初始化Base" << endl;
    }
    void print() {
      cout << "Base::n = " << n << endl;
    }
};

class Derived: public Base {
  public:
    int v;
    Derived(int i): Base(i), v(2 * i) {
      cout << "初始化Derived" << endl;
    }
    void func() {};
    void print() {
      cout << "Derived::n = " << n << endl;
      cout << "Derived::v = " << v << endl;
    }
};

int main() {
  Derived objDerived(3);
  Base objBase(5);
  Base *pBase = &objDerived;
  Derived *pDerived;
  pDerived = &objDerived;
  cout << "使用派生类指针调用函数" << endl;
  pDerived->print();
  pBase = pDerived; // 正确, 基类指针 = 派生类指针

  cout << "使用基类指针调用函数" << endl;
  pBase->print();
  // pBase->func(); // 错误, 基类不含此函数
  // pDerived = pBase; // 错误, 基类指针赋值给派生类指针需要强制类型转换
  pDerived = (Derived *)pBase; // 基类指针强制类型转换

  cout << "使用派生类指针调用函数" << endl;
  pDerived->print();

  // Base a(5);
  // Base *b = &a;
  // Derived *c = (Derived *)b;
  // cout << "Derived::v = " << c->v << endl;
  // c->Base::print();

  return 0;
}