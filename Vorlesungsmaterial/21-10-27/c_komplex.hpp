#ifndef C_KOMPLEX_HPP
#define C_KOMPLEX_HPP
#include "../header.h"


class cKomplex {
   double _re;  // Membervariable
   double _im;
public:
   cKomplex();
   cKomplex(int re, int im);
   ~cKomplex();
   void ausgabe();   // Methode

   int operator==(const cKomplex obj);
   cKomplex operator++();
   cKomplex operator++(int notUsed);
   cKomplex operator+(const cKomplex& obj);
   friend cKomplex operator-(const cKomplex& obj1, const cKomplex& obj2);
   friend ostream& operator<<(ostream& os, const cKomplex& obj);
};
#endif