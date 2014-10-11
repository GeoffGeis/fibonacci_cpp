#include <iostream>
using namespace std;

class Fib {
  int n, c, first, second, next;
public:
  Fib() {
    first = 0;
    second = 1;
    cout << "Enter the number of terms of Fibonacci series you want" << endl;
    cin >> n;
    cout << "First " << n << " terms of Fibonacci series are :" << endl;
  }

  int solve() {
    for(c = 0 ; c < n ; c++) {
      if(c <= 1) {
        next = c;
      }
      else {
        next = first + second;
        first = second;
        second = next;
      }
      cout << next << endl;
    }
  }
};

int main() {
  Fib fib;
  cout << fib.solve() << endl;
  return 0; 
}