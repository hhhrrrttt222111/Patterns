
/*
multiplication Pattern
*   *
 * * 
  *  
 * * 
*   *

*/
#include <iostream>
using namespace std;

int main() {
  // size of cross, use odd number
  int size = 5;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i==j || i+j==size-1) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
