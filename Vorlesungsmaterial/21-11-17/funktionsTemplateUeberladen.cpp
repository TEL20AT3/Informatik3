#include <iostream>
#include <vector>


// 1 - Freie Funktion
void tausch(int &a, int &b)
{
   std::cout << "void tausch(int &a, int &b)\n";
   int temp = a;
   a = b;
   b = temp;

}

// 2 - Funktions Template 2 Args
template <typename T>
void tausch(T &a, T &b)
{
   std::cout << "void tausch(T &a, T &b)\n";
   T temp = a;
   a = b;
   b = temp;
}

// 3 - Funktions Template 3 Args
template <typename T>
void tausch(T &a, T &b, T &c)
{
   std::cout << "void tausch(T &a, T &b, T &c)\n";
   tausch(a,b);   // --> 1
   tausch(a,c);   // --> 1
}


int main()
{
   std::cout << std::endl;

   int intA = 2, intB = 3, intC = 4;
   tausch(intA, intB);     // --> 1

   tausch<>(intA,intB);       // explizit 2
   tausch<int>(intA,intB);    // explizit 2

   double doubleA = 2, doubleB = 3, doubleC = 4;
   tausch(doubleA, doubleB);        // --> 2
   // tausch<int>(doubleA, doubleB);      // ERROR - argumente sind double, keine automatische Typkonvertierung

   std::cout << "\ntausch() mit int: "<< std::endl;
   tausch(intA, intB, intC);     // --> 3

   std::cout << "\ntausch() mit double: "<< std::endl;
   tausch(doubleA, doubleB, doubleC);     // --> 3
   std::cout << std::endl;

   return EXIT_SUCCESS;
}