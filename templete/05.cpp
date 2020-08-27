#include <iostream>
#include <string>
using namespace std;

class TBase {
  private:
    int k;
  public:
    void print() {
      cout << "TBase::k = " << k << endl;
    }
};

template <class T>
class TDerived: public TBase {
  private:
    T data;
  public:
    void setData(T x) {
      data = x;
    }
    void print() {
      TBase::print();
      cout << "TDerived::data = " << data << endl;
    }
};

int main() {
  TDerived<string> d;
  d.setData("2019");
  d.print();

  return 0;
}