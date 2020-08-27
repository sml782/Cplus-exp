#include <iostream>
#include <string>
using namespace std;

template <class T>
class TBase {
  private:
    T data;
  public:
    void print() {
      cout << "TBase::data = " << data << endl;
    }
};

template <class T1, class T2>
class TDerived: public TBase<T1> {
  private:
    T2 data2;
  public:
    void print() {
      TBase<T1>::print();
      cout << "TDerived::data2 = " << data2 << endl;
    }
};

int main() {
  TDerived<int, int> d;
  d.print();
  TDerived<string, string> d2;
  d2.print();

  return 0;
}