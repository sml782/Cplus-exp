// [getline] 读取指定长度输入, 超过直接退出

#include <iostream>

using namespace std;

int main() {
  char buf[10];
  int i = 0;
  while (cin.getline(buf, 10)) {
    cout << ++i << ": " << buf << endl;
  }
  cout << "last: " << buf << endl;
  
  return 0;
}