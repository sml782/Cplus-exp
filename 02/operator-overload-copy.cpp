// ! 浅拷贝

#include <iostream>
using namespace std;

class Pointer {    
  public:
    int a;
    int *p;
    Pointer();
    Pointer(const Pointer &);
};

Pointer::Pointer(): a(100), p(new int(10)) {}

Pointer::Pointer(const Pointer &tempP) {
  if (this != &tempP) {
    a = tempP.a;
    p = tempP.p;
  }
}

int main() {
  Pointer p1;
  Pointer p2(p1);
  Pointer p3 = p1;
  cout << "\n初始化后,各对象值及内存地址" << endl;
  cout << "对象名\t对象地址\ta的值\tp中的值\t\t  p指向的值\tp的地址" << endl;
  cout << "p1:\t" << &p1 << ",\t" << p1.a << ",\t" << p1.p << ",\t  " << *p1.p << ",\t\t" << &p1.p << endl;
  cout << "p2:\t" << &p2 << ",\t" << p2.a << ",\t" << p2.p << ",\t  " << *p2.p << ",\t\t" << &p2.p << endl;
  cout << "p3:\t" << &p3 << ",\t" << p3.a << ",\t" << p3.p << ",\t  " << *p3.p << ",\t\t" << &p3.p << endl;
  *p1.p=20;
  p2.a=300;
  cout << "\n修改后，各对象值及内存地址" << endl;
  cout << "对象名\t对象地址\ta的值\tp中的值\t\t  p指向的值\tp的地址" << endl;
  cout << "p1:\t" << &p1 << ",\t" << p1.a << ",\t" << p1.p << ",\t  " << *p1.p << ",\t\t" << &p1.p << endl;
  cout << "p2:\t" << &p2 << ",\t" << p2.a << ",\t" << p2.p << ",\t  " << *p2.p << ",\t\t" << &p2.p << endl;
  cout << "p3:\t" << &p3 << ",\t" << p3.a << ",\t" << p3.p << ",\t  " << *p3.p << ",\t\t" << &p3.p << endl;
  return 0;
}