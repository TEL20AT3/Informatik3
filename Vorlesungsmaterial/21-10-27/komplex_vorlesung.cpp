#include <iostream>

using namespace std;

class komplex
{
   double _re;
   double _im;

public:
   // komplex();
   // inline Konstruktor
   komplex(double re = 0, double im = 0): _re(re), _im(im) {cout << "2ter Konstruktor\n";};
   ~komplex();
   void ausgabe();

   // operator Überladen
   int operator== (const komplex& obj);
   friend ostream& operator<< (ostream& os, const komplex& obj);

   void set_im (double im);
   double get_im ();
};

int main(int argc, char const *argv[])
{
   komplex zahl;
   zahl.ausgabe();
   komplex zahl2(5.5);
   // zahl._im = 1;
   // zahl._re = 2;
   zahl2.ausgabe();
   zahl2.set_im(10);
   // zahl2.ausgabe();
   cout << "Zahl2: " << zahl2 << endl;

   if (zahl2 == zahl)
   {
      cout << "Zahlen sind gleich\n";
   }
   else {
      cout << "Zahlen sind nicht gleich\n";
   }

   cout << "Letzte Programmzeile\n";
   return 0;
}

int komplex::operator== (const komplex& obj) {
   if (_re == obj._re && _im == obj._im) {
      return true;
   }
   else {
      return false;
   }
}
ostream& operator<< (ostream& os, const komplex& obj) {
   os << "mit operator<< : " << obj._re << ", " << obj._im << endl;
   return os;
}
void komplex::ausgabe() {
   cout << "Komplexe Zahl: " << _re << ", " << _im << endl;
}
komplex::~komplex() {
   cout << "Bye, bye!\n";
}
void komplex::set_im(double im) {
   _im = im;
}
double komplex::get_im() {
   return _im;
}
// komplex::komplex() {
//    cout << "Default Konstruktor\n";
//    _re = 0;
//    _im = 0;
// }