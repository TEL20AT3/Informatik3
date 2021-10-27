#include <iostream>

using namespace std;

class komplex
{
   double _re;
   double _im;

public:
   // komplex();
   komplex(double re = 0, double im = 0): _re(re), _im(im) {cout << "2ter Konstruktor\n";};
   void ausgabe();

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
   zahl2.ausgabe();
   return 0;
}


void komplex::ausgabe() {
   cout << "Komplexe Zahl: " << _re << ", " << _im << endl;
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