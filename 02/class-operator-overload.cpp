#include <iostream>
using namespace std;

// ! 运算符重载
// ! 1. 直接类内定义 - 第一个值左值纳入this, 第二个值纳入 参数
// ! 2. friend - 运算符两边值都纳入 参数

// 复数类
class MyComplex {
  private:
    double real;
    double imag;
  public:
    MyComplex();
    MyComplex(double, double);
    void outCom();
    
    // 开始重载
    // MyComplex operator-(const MyComplex &);
    friend MyComplex operator-(const MyComplex &, const MyComplex &);
    friend MyComplex operator+(const MyComplex &, const MyComplex &);
};

MyComplex::MyComplex(): real(0), imag(0) {}

MyComplex::MyComplex(double r, double i): real(r), imag(i) {}

void MyComplex::outCom() {
  cout << "(" << real << ", " << imag << ")";
}

// MyComplex MyComplex::operator-(const MyComplex &c) {
//   return MyComplex(this->real - c.real, this->imag - c.imag);
// }

MyComplex operator-(const MyComplex &c1, const MyComplex &c2) {
  return MyComplex(c1.real - c2.real, c1.imag - c2.imag);
}

MyComplex operator+(const MyComplex &c1, const MyComplex &c2) {
  return MyComplex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
  MyComplex c1(1, 2);
  MyComplex c2(3, 4);
  MyComplex res;

  c1.outCom();
  cout << " operator+ ";
  c2.outCom();
  cout << " = ";
  res = c1 + c2;
  res.outCom();
  cout << endl;

  c1.outCom();
  cout << " operator- ";
  c2.outCom();
  cout << " = ";
  res = c1 - c2;
  res.outCom();
  cout << endl;


  return 0;
}