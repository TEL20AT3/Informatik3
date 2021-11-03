#include "../header.h"

class NoInheritance final {};

class Derived: NoInheritance {};    // Error !


class Base {};
class LastClass final: Base {};
class LastLastClass: LastClass {}; // Error !

int main(int argc, char *argv[])
{
   cout << "Hello World!" << endl;
   return EXIT_SUCCESS;
}