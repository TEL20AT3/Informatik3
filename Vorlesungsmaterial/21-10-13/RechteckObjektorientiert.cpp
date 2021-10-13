// RechteckObjektorientiert.cpp
#include <iostream>
using namespace std;
struct Rechteck
{
   double a;
   double b;
   void initialisieren(double x, double y);
   double flaeche();
   double umfang();
};
void Rechteck::initialisieren(double x, double y)
{
   a = x;
   b = y;
}
double Rechteck::flaeche()
{
   return a * b;
}
double Rechteck::umfang()
{
   return 2 * a + 2 * b;
}

int main()
{
   Rechteck g;
   g.initialisieren(3.8, 7.9);
   cout << "Fläche : ";
   cout << g.flaeche() << "\n";
   cout << "Umfang : ";
   cout << g.umfang() << "\n";
   return 0;
}