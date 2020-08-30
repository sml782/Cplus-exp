#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void rFile() {
  /** read: 读文件流 **/
  // 1.
  ifstream inFile("./testfile/test.txt", ios::in);

  // 2.
  // ifstream inFile;
  // inFile.open("./testfile/test.txt", ios::in)

  if (!inFile) {
    cerr << "[FILE:test.txt]打开文件 test.txt 失败: ./testfile/test.txt\n";
    return;
  }

  // 开始读内容
  cout << "[FILE:test.txt]打开文件 test.txt 成功: ./testfile/test.txt\n";
  cout << "[FILE:test.txt]开始读取文件内容" << endl;
  char data[] = {};
  // getline(inFile, data);
  inFile.getline(data, 100);
  cout << "[FILE:test.txt]文件内容是: " << data << endl;

  inFile.close();
}

void wFile() {
  /** write: 写文件流 **/
  // 1.
  ofstream outFile("./testfile/test1.txt", ios::out);

  // 2.
  // ofstream outFile;
  // outFile.open("./testfile/test1.txt", ios::out);

  if (!outFile) {
    cerr << "[FILE:test1.txt]打开文件 test1.txt 失败: ./testfile/test1.txt, 新建!" << endl;
  }

  // 开始写内容
  cout << "[FILE:test1.txt]打开文件 test1.txt 成功: ./testfile/test1.txt" << endl;
  cout << "[FILE:test1.txt]开始写入内容" << endl;
  outFile << "这里是 test1" << endl;
  cout << "[FILE:test1.txt]写入文件成功!" << endl;
  outFile.close();
}

void rwFile() {
  /** read-write: 读写流 **/
  fstream rw("./testfile/test2.txt", ios::in|ios::out|ios::trunc);
  
  if (!rw) {
    cerr << "[FILE:test2.txt]打开文件 test2.txt 失败: ./testfile/test2.txt, 新建" << endl;
  } else {
    cout << "[FILE:test2.txt]打开文件 test2.txt 成功: ./testfile/test2.txt" << endl;
    cout << "[FILE:test2.txt]开始读取内容" << endl;
    string data;
    rw >> data;
    cout << "[FILE:test2.txt]文件内容: " << data << endl;
  }

  cout << "[FILE:test2.txt]开始写入内容" << endl;
  rw << "这里是 test2" << endl;
  // rw.write("这里是文件2", 0);
  cout << "[FILE:test2.txt]写入文件成功!" << endl;
  rw.close();
}

int main() {
  rFile();

  wFile();

  rwFile();
  
  return 0;
}