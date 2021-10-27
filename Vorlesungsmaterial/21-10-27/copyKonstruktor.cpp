#include <iostream>
#include <utility>

class cKomplex{
private:
   // Membervariable
   double _re;
   double _im;
public:
  cKomplex():_re(0.0), _im(0.0) {}
  cKomplex(double re, double im):_re(re), _im(im) {}
  // copy Konstruktor
  cKomplex(const cKomplex& obj){
    std::cout << "Copy Konstr: cKomplex(const cKomplex& obj)" << std::endl;
    _re = obj._re;
    _im = obj._im;
  }
  // copy Zuweisungsoperator
  cKomplex& operator=(const cKomplex& obj){
    std::cout << "Zuweisungs Operator: cKomplex& operator=(const cKomplex& obj)" << std::endl;
    _re = obj._re;
    _im = obj._im;
    return *this;
  }
  // move Konstruktor
  cKomplex(cKomplex&& obj){
    std::cout << "move Konstruktor: cKomplex(cKomplex&& obj)" << std::endl;
    _re = obj._re;
    _im = obj._im;
    obj._re = 0.0;
    obj._im = 0.0;
  }
  // move Zuweisungsoperator
  cKomplex& operator=(const cKomplex&& obj){
    std::cout << "Move Zuweisungs Operator: cKomplex& operator=(const cKomplex& obj)" << std::endl;
    _re = std::move(obj._re);
    _im = std::move(obj._im);
    return *this;
  }
};

int main()
{

   std::cout << std::endl;

   cKomplex obj;

   cKomplex obj1(obj);    // copy konstruktor
   cKomplex obj2 = obj;   // copy konstruktor
  //  cKomplex obj123 (cKomplex(1,1));
   obj2 = obj;    /// copy zuweisungsoperator

   cKomplex obj3(std::move(obj1));  // move Konstruktor
   cKomplex obj4;
   obj4 = std::move(obj2); // Move Zuweisungs Operator

   std::cout << std::endl;
}