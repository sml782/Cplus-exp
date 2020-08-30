// [cin.eof][bool] 判断是否到达文件尾
// [cin.ignore(int n = 1, char delim = EOF)] 跳过输入流中的 n 个字符, 或跳过 delim 及其之前的所有字符

#include <iostream>

using namespace std;

int main() {
  char str[30];
  while (!cin.eof()) {
    cin.ignore(10, ':');
    if (!cin.eof()) {
      cin >> str;
      cout << str << endl;
    }
  }
  
  return 0;
}