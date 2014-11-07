#include <iostream>
#include <gmpxx.h>
using namespace std;

class Fib {
  int n; 
public:
  Fib() {
    cout << "Enter the number of terms of Fibonacci series you want" << endl;
    cin >> n;
    cout << "The " << n << " Fibonacci number is:" << endl;
  }

  void solve() {
    int i; 
    mpz_class first, second, next;
    first = 0;
    second = 1;
    for(i = 0 ; i < n + 1 ; i++) {
      if(i <= 1) {
        next = i;
      }
      else {
        next = first + second;
        first = second;
        second = next;
      }
    }
    cout << next << endl;
  }
};

int main() {
  Fib fib;
  fib.solve();
  return 0; 
}