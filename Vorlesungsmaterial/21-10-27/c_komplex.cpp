#include "c_komplex.hpp"

int main() {
   cKomplex a, b(1,2), c(2, 5);
   a.ausgabe();
   b.ausgabe();

   if(a == b) {
      cout << "(a == b)" << endl;
   }
   else {
      cout << "(a != b)" << endl;
   }
   cKomplex z = b - c;
   cout << "a: " << a << endl;
   cout << "b: " << b << endl;
   cout << "c: " << c << endl;
   cout << "z: " << z << endl;
   return EXIT_SUCCESS;
}

cKomplex::cKomplex(): _re(0), _im(0) {
   // _re = _im = 0;
}
cKomplex::cKomplex(int re, int im): _re(re), _im(im) {
   // _re = re;
   // _im = im;
}
cKomplex::~cKomplex() {
   cout << "Bye, bye!" << endl;
}

void cKomplex::ausgabe() {
   cout << '(' << this->_re << ',' << this->_im << ')' << endl;
}

int cKomplex::operator==(const cKomplex obj) {
   if (_re == obj._re && _im == obj._im) {return true;}
   else {return false;}
}

cKomplex cKomplex::operator+(const cKomplex& obj1) {
   cKomplex z;
   z._im = this->_im + obj1._im;
   z._re = this->_re + obj1._re;
   return z;
}

cKomplex operator-(const cKomplex& obj1, const cKomplex& obj2) {
   return cKomplex (obj1._im - obj2._im, obj1._re - obj2._re);
}
ostream& operator<<(ostream& os, const cKomplex& obj) {
   os << obj._re << ", " << obj._im;
   return os;
}
