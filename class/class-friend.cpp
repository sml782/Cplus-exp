#include <iostream>
#include <cmath>
using namespace std;

// ! 1. 这里用到数学函数
// pow(x, n) 次幂 x^n;
// sqrt(x) 开平方

// ! 2. 如果将整个B类设为另一个类A的友元类, 则这个B类所有函数都是A类的友元函数
// friend class B;

// 前向引用声明
class Pixel;

class Test {
  public:
    void printXY(Pixel p);
};

class Pixel {
  private:
    int x;
    int y;
  public:
    Pixel(int, int);
    void printXY();
  friend double getDist(Pixel, Pixel);
  friend void Test::printXY(Pixel);
};

Pixel::Pixel(int x0, int y0): x(x0), y(y0) {}

void Pixel::printXY() {
  cout << "pixel:(" << x << ", " << y << ")" << endl;
}

void Test::printXY(Pixel p) {
  cout << "x=" << p.x << "\ty=" << p.y << endl; 
}

double getDist(Pixel p1, Pixel p2) {
  // 使用私有成员
  double xd = double(p1.x - p2.x);
  double yd = double(p1.y - p2.y);
  return sqrt(pow(xd, 2) + pow(yd, 2));
}

int main() {
  Pixel p1(0, 0);
  Pixel p2(10, 10);
  p1.printXY();
  p2.printXY();
  cout << "(p1,p2)间距离=" << getDist(p1,p2) << endl;
  Test t;
  cout << "从友元函数中输出" << endl;
  t.printXY(p1);
  t.printXY(p2);
  return 0;
}