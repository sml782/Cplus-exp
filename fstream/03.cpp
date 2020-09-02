#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
  char ch;
  char filename[20];
  int count = 0;
  bool newline = true;
  cout << "请输入文件名:";
  cin >> filename;
  ifstream inFile(filename, ios::in);
  if (!inFile) {
    cout << "打开文件失败" << endl;
    return 0;
  }
  while ((ch = inFile.get()) != EOF) {
    if (newline) {
      cout << setw(4) << "第" << ++count << "行" << ": ";
      newline = false;
    }
    if (ch == '\n') {
      newline = true;
    }
    cout << ch;
  }
  inFile.close();

  return 0;
}