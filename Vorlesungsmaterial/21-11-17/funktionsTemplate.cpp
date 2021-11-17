#include <iostream>
#include <vector>

template <typename T>
void tausch(T &a, T &b)
{
   T temp = a;
   a = b;
   b = temp;
}
/*
void tausch(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}
void tausch(bool &a, bool &b)
{
   bool temp = a;
   a = b;
   b = temp;
}
void tausch(std::vector<int> &a, std::vector<int> &b)
{
   std::vector<int> temp = a;
   a = b;
   b = temp;
}
*/

template <int N>
int nTimes(int n)
{
   return N * n;
}

int main()
{

   int a = 2, b = 3;

   std::cout << "int Variablen a und b vor dem Tausch:" << std::endl;
   std::cout << "a: " << a << " b: " << b << std::endl;
   tausch(a, b);
   std::cout << "int Variablen a und b nach dem Tausch:" << std::endl;
   std::cout << "a: " << a << " b: " << b << std::endl;
   std::cout << std::endl;

   bool t = true;
   bool f = false;
   std::cout << "bool Variablen t und f vor dem Tausch:" << std::endl;
   std::cout << "(t,f):  (" << t << "," << f << ") " << std::endl;
   tausch(t, f);
   std::cout << "bool Variablen t und f nach dem Tausch:" << std::endl;
   std::cout << "(t,f):  (" << t << "," << f << ") " << std::endl;

   std::cout << "nTimes<10>(5): " << nTimes<10>(5) << std::endl;
   std::cout << std::endl;
   std::cout << "nTimes<3>(5): " << nTimes<3>(5) << std::endl;
   std::cout << std::endl;

   std::cout << std::endl;
   std::vector<int> intVec1{1, 2, 3, 4, 5};
   std::vector<int> intVec2{5, 4, 3, 2, 1};

   std::cout << "intVec1 und intVec2 vor dem Tausch:" << std::endl;
   for (auto v : intVec1)
      std::cout << v << " ";
   for (auto v : intVec2)
      std::cout << v << " ";
   std::cout << std::endl;
   tausch(intVec1, intVec2);
   std::cout << "intVec1 und intVec2 nach dem Tausch:" << std::endl;
   for (auto v : intVec1)
      std::cout << v << " ";
   for (auto v : intVec2)
      std::cout << v << " ";
   std::cout << std::endl;

   return EXIT_SUCCESS;
}