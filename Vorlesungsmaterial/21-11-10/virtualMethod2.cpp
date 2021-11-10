#include "../header.h"

class Base {
public:
   void virtual getNameVirtual() {
      cout << "Base::getNameVirtual()\n";
   }
   void getName() {
      cout << "Base::getName()\n";
   }
};
class Derived: public Base {
   void virtual getNameVirtual() {
      cout << "Derived::getNameVirtual()\n";
   }
   void getName() {
      cout << "Derived::getName()\n";
   }

   fadfasdfasdf;
};


int main(int argc, char const *argv[])
{
   Derived d;
   Base& base_ref = d;

   base_ref.getNameVirtual();
   base_ref.getName();
   return 0;
}
