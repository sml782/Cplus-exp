// 循环进行控制台输入, 直到遇到结束符 EOF
// 结束输入: CTRL + D | (win) CTRL + Z ENTER
// 

#include <iostream>

using namespace std;

int main() {
  int n = 0;
  char ch;

  // 当文件没有到结束时继续进行循环
  while ((ch = cin.get()) != EOF) {
    cout.put(ch);
    n++;
  }
  cout << "输入字符共计:" << n << endl;

  return 0;
}