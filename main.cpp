#include <iostream>

using namespace std;
extern "C" double putchard(double X) {
  fputc((char)X, stderr);
  return 0;
}

extern "C" {
    double printstar(double);
    double average(double, double);
    double fib(double);
    double mandel(double, double, double, double);
    double fibi(double);
    double quad(double, double);

}

int main() {
    cout << "Result: " << mandel(-2.3, -1.3, 0.05, 0.07)<< endl;

return 0;
}
