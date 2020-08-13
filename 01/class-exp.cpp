#include <iostream>
#include <string>
using namespace std;

class MyDate {
  public:
    void myDate();
    void myDate(int, int, int);
    void setDate(MyDate);
    void setDate(int, int, int);
    MyDate getDate();
    void setYear(int);
    int getMonth();
    void printDate() const;
  private:
    int year, month, day;
};

void MyDate::myDate() {
  year = 1970;
  month = 1;
  day = 1;
}

void MyDate::myDate(int y, int m, int d) {
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

void Student::setStudent(string s, MyDate mydate) {
  name = s;
  birthday = mydate;
}

void Student::setName(string s) {
  name = s;
}

string Student::getName() {
  return name;
}

void Student::setBirthday(MyDate mydate) {
  birthday.setDate(mydate);
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
  MyDate mydate;
  string name;
  int year, month, day;
  cout << "请输入姓名/生日, 格式为\"姓名 年 月 日\", 以空格分割: ";
  cin >> name >> year >> month >> day;
  mydate.setDate(year, month, day);
  ss.setStudent(name, mydate);

  ss.printStudent();

  return 0;
}