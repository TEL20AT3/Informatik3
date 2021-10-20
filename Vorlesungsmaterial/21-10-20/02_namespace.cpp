#include <iostream>

using std::cout;
using std::endl;

int x = 5;

namespace A {
   int x = 10;
}

int main (int argc, char *argv[]) {

   cout << ::x << endl;
   cout << A::x << endl;
   return EXIT_SUCCESS;
}