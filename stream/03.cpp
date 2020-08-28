#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double x = 12.34;

  cout << "1) " << setiosflags(ios::scientific|ios::showpos) << x << endl;

  cout << "2) " << resetiosflags(ios::scientific) << setiosflags(ios::fixed) << setprecision(2) << x << endl;

  cout << "3) " << resetiosflags(ios::fixed) << setiosflags(ios::scientific|ios::showpos) << x << endl;
  
  cout << "4) " << resetiosflags(ios::showpos) << x << endl;

  return 0;
}