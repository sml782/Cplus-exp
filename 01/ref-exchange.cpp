#include <iostream>
using namespace std;

// ! 随便写写交换

void SwapValue(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
  cout<<"在SwapValue()中:\t\ta="<<a<<", b="<<b<<endl;
};

void SwapRef(int &a, int &b) {
  int temp = a;
  debu
  a = b;
  b = temp;
  cout<<"SwapRef()中:\t\ta="<<a<<", b="<<b<<endl;
}

int main()
{
  int a = 10;
  int b = 20;
  cout<<"数据交换前:\t\ta="<<a<<", b="<<b<<endl;
  SwapValue(a, b);
  cout<<"调用SwapValue()后:\t\ta="<<a<<", b="<<b<<endl;
  a = 10;
  b = 20;
  SwapRef(a, b);
  cout<<"SwapRef()后:\t\ta="<<a<<", b="<<b<<endl;
  return 0;
}