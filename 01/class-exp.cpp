#include <iostream>
#include <string>
using namespace std;

// ! 类

class MyDate {
  public:
    // ! 函数名和类名相同为构造函数
    MyDate();
    MyDate(int, int, int);
    void setDate(MyDate);
    void setDate(int, int, int);
    MyDate getDate();
    void setYear(int);
    int getMonth();
    void printDate() const;
  private:
    int year, month, day;
};

MyDate::MyDate() {
  year = 1970;
  month = 1;
  day = 1;
}

MyDate::MyDate(int y, int m, int d) {
  year = y;
  month = m;
  day = d;
}

void MyDate::setDate(MyDate date) {
  year = date.year;
  month = date.month;
  day = date.day;
}

void MyDate::setDate(int y, int m, int d) {
  year = y;
  month = m;
  day = d;
}

MyDate MyDate::getDate() {
  return *this;
}

void MyDate::setYear(int y) {
  year = y;
}

int MyDate::getMonth() {
  return month;
}

void MyDate::printDate() const {
  cout << year << "/" << month << "/" << day;
}

class Student {
  public:
    void setStudent(string, MyDate);
    void setName(string);
    string getName();
    void setBirthday(MyDate);
    MyDate getBirthday();
    void printStudent() const;
  private:
    string name;
    MyDate birthday;
};

void Student::setStudent(string s, MyDate MyDate) {
  name = s;
  birthday = MyDate;
}

void Student::setName(string s) {
  name = s;
}

string Student::getName() {
  return name;
}

void Student::setBirthday(MyDate date) {
  birthday.setDate(date);
}

MyDate Student::getBirthday() {
  return birthday;
}

void Student::printStudent() const {
  cout << "姓名: " << name << "\t生日:";
  birthday.printDate();
  cout << endl;
}

int main() {
  Student ss;
  string name;
  int year, month, day;
  cout << "请输入姓名/生日, 格式为\"姓名 年 月 日\", 以空格分割: ";
  cin >> name >> year >> month >> day;

  /*** 含有构造函数的类使用 ***/
  // 1. 直接定义
  // MyDate MyDate;
  // MyDate.setDate(year, month, day);
  // 2. 通过构造函数
  MyDate ddate = MyDate(year, month, day);


  // 直接调用
  // ss.setStudent(name, MyDate);
  // ss.printStudent();

  // 指针调用
  // Student *sp = &ss;
  // sp->setStudent(name, MyDate);
  // sp->printStudent();

  // 引用调用
  Student &sy = ss;
  sy.setStudent(name, ddate);
  sy.printStudent();

  return 0;
}