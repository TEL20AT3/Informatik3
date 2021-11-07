#include "Bruch.hpp"
#include <iostream>

 int main(int argc, char const *argv[])
{
   std::cout << "Hello Bruch\n";
   Bruch b1(10, 4), b2(3, 4), b3(3, 5);
   b1 = b1 + b2;
   std::cout << "b1: " << b1 << std::endl;
   b1.kuerzen();
   std::cout << "b1: " << b1 << std::endl;
   double d_b1 = b1;
   std::cout << "double b1: " <<  d_b1 << std::endl;
   return EXIT_SUCCESS;
}