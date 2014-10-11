#include <iostream>
using namespace std;

class Fib {
  int n,first, second;
public:
  Fib() {
    first = 0;
    second = 1;
    cout << "Enter the number of terms of Fibonacci series you want" << endl;
    cin >> n;
    cout << "First " << n << " terms of Fibonacci series are :" << endl;
  }

  int solve() {
    int i, next;
    for(i = 0 ; i < n ; i++) {
      if(i <= 1) {
        next = i;
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