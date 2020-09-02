#include <iostream>
#include <fstream>

using namespace std;

class Student {
  public:
    char id[11];
    char name[21];
    int score;
};

int main() {
  Student stu;
  // 以二进制形式读取
  ofstream outFile("./testfile/students", ios::out|ios::binary);
  if (!outFile) {
    cout << "创建文件失败" << endl;
    return 0;
  }
  cout << "请输入: 学号 姓名 成绩\n";
  while (cin >> stu.id >> stu.name >> stu.score) {
    outFile.write(((char *)&stu), sizeof(stu));
  }
  outFile.close();

  return 0;
}