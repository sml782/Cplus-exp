#include <iostream>
using namespace std;

class Test {
  private:
    int i;
    float f;
    char ch;
  public:
    Test();
    Test(int, float, char);
    friend ostream &operator<<(ostream &, Test obj);
    friend istream &operator>>(istream &, Test& obj);
};

Test::Test(): i(0), f(0), ch('\0') {}
Test::Test(int a, float b = 0, char c = '\0'): i(a), f(b), ch(c) {}

ostream &operator<<(ostream& stream, Test obj) {
  stream << "{" << endl;
  stream << "  \"i\": " << obj.i << endl;
  stream << "  \"f\": " << obj.f << endl;
  stream << "  \"ch\": " << obj.ch << endl;
  stream << "}" << endl;
  return stream;
}

istream &operator>>(istream& stream, Test& obj) {
  stream >> obj.i >> obj.f >> obj.ch;
  return stream;
}

int main() {
  Test A(45, 8.5, 'W');
  cout << A;
  Test B, C;
  cout << "输入 B 的 i, f ch:" << endl;
  cin >> B;
  cout << B;
  cout << "输入 C 的 i, f ch:" << endl;
  cin >> C;
  cout << C;
  return 0;
}