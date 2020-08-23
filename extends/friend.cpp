#include <iostream>
using namespace std;

class Another;

class Base {
  private:
    float x;
  public:
    void print(const Another &);
};

class Derived: public Base {
  private:
    float y;
};

class Another {
  private:
    int aaa;
  public:
    Another(): aaa(100) {};
    friend void Base::print(const Another &);
};

void Base::print(const Another &k) {
  cout << "Base: " << k.aaa << endl;
}

int main() {
  Base a;
  Derived d;
  Another ano;
  a.print(ano);
  d.print(ano);
  return 0;
}