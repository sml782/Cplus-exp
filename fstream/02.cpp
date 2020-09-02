#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
  char id[11];
  char name[21];
  int score;
  ofstream outFile;
  outFile.open("./testfile/score.txt", ios::out);
  if (!outFile) {
    cout << "创建文件失败" << endl;
    return 0;
  }
  cout << "请输入: 学号 姓名 成绩\n";
  while (cin >> id >> name >> score) {
    outFile << left << setw(10) << id << " " << setw(20) << name << " " << setw(3) << right << score << endl;
  }
  outFile.close();

  return 0;
}