#include <iostream>
using namespace std;

// ! 类的静态变量

class Test {
  public:
    Test() {};
    Test(int a, int b) {
      x = a;
      n = b;
    };
    static int func() {
      return x;
    };
    static void sfunc(Test& r, int a) {
      r.n = a;
    }
    int getN() {
      return n;
    }
  private:
    static int x;
    int n;
};

int Test::x = 25;

int main() {
  cout << "静态值 x: " << Test::func() << endl;
  Test b, c;
  b.sfunc(b, 58);
  cout << "b.n: " << b.getN() << endl;
  cout << "静态值 b.x: " << b.func() << endl;
  cout << "静态值 c.x: " << c.func() << endl;
  Test a(24, 56);
  cout << "静态值 all: " << a.func() << "\t" << b.func() << "\t" << c. func() << endl;
}