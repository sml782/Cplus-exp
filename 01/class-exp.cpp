#include <iostream>
#include <string>
using namespace std;

class myDate {
  public:
    // ! 函数名和类名相同为构造函数
    myDate();
    myDate(int, int, int);
    void setDate(myDate);
    void setDate(int, int, int);
    myDate getDate();
    void setYear(int);
    int getMonth();
    void printDate() const;
  private:
    int year, month, day;
};

myDate::myDate() {
  year = 1970;
  month = 1;
  day = 1;
}

myDate::myDate(int y, int m, int d) {
  year = y;
  month = m;
  day = d;
}

void myDate::setDate(myDate date) {
  year = date.year;
  month = date.month;
  day = date.day;
}

void myDate::setDate(int y, int m, int d) {
  year = y;
  month = m;
  day = d;
}

myDate myDate::getDate() {
  return *this;
}

void myDate::setYear(int y) {
  year = y;
}

int myDate::getMonth() {
  return month;
}

void myDate::printDate() const {
  cout << year << "/" << month << "/" << day;
}

class Student {
  public:
    void setStudent(string, myDate);
    void setName(string);
    string getName();
    void setBirthday(myDate);
    myDate getBirthday();
    void printStudent() const;
  private:
    string name;
    myDate birthday;
};

void Student::setStudent(string s, myDate myDate) {
  name = s;
  birthday = myDate;
}

void Student::setName(string s) {
  name = s;
}

string Student::getName() {
  return name;
}

void Student::setBirthday(myDate date) {
  birthday.setDate(date);
}

myDate Student::getBirthday() {
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
  // myDate myDate;
  // myDate.setDate(year, month, day);
  // 2. 通过构造函数
  myDate ddate = myDate(year, month, day);


  // 直接调用
  // ss.setStudent(name, myDate);
  // ss.printStudent();

  // 指针调用
  // Student *sp = &ss;
  // sp->setStudent(name, myDate);
  // sp->printStudent();

  // 引用调用
  Student &sy = ss;
  sy.setStudent(name, ddate);
  sy.printStudent();

  return 0;
}