// RechteckFunktional.cpp
#include <iostream>
using namespace std;
struct Rechteck
{
   double a;
   double b;
};



void initialisieren(Rechteck *r, double x, double y)
{
   r->a = x;
   r->b = y;
}
double flaeche(Rechteck r)
{
   return r.a * r.b;
}
double umfang(Rechteck r)
{
   return 2 * r.a + 2 * r.b;
}

int main()
{
   Rechteck g;
   initialisieren(&g, 3.8, 7.9);
   cout << "Fläche : ";
   cout << flaeche(g) << "\n";
   cout << "Umfang : ";
   cout << umfang(g) << "\n";
   return 0;
}