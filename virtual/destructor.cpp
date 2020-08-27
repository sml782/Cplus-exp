// ! 虚析构函数能正常析构

#include <iostream>
using namespace std;

class Base {
  public:
    Base() {
      cout << "ABase构造函数" << endl;
    }
    virtual ~Base() {
      cout << "ABase::析构函数" << endl;
    }
};

class Derived: public Base {
  public:
    int w;
    int h;
    Derived() {
      cout << "Derived构造函数" << endl;
    }
    ~Derived() {
      cout << "Derived::析构函数" << endl;
    }
};

int main() {
  Base *p = new Derived();
  // 通过删除指针调用析构函数
  delete p;

  return 0;
}