// [put] 向输出流中插入一个字符
// [write] 向输出六中插入指定长度的字节序列

#include <iostream>

using namespace std;

int main() {
  char c = 'a';
  char str[80] = "0123456789abcdefghijklmn";
  int x = 65;
  
  cout << "cout.put('a'): ";
  cout.put('a');
  cout << "\ncout.put(c + 25): ";
  cout.put(c + 25);
  cout << "\ncout.put(x): ";
  cout.put(x);
  cout << "\ncout.write(str, 20): ";
  cout.write(str, 20);

  return 0;
}