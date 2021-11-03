#include "../header.h"


class MyString {
   char * _t;
   public:
   MyString() {
      _t = nullptr;
   }
   MyString (const char *p) {
      if (p) {
         _t = new char[1+strlen(p)];
         strcpy(_t, p);
      }
      else {
         _t = nullptr;
      }
   }
   ~MyString() {
      delete[] _t;
   }
   void ausgabe () {
      cout << _t;
   }
   MyString operator= (const MyString& obj) {
      delete _t;
      if (obj._t) {
         _t = new char[1+strlen(obj._t)];
         strcpy(_t, obj._t);
      }
      else {
         _t = nullptr;
      }
      return *this;
   }
   friend std::ostream& operator<< (std::ostream &os, const MyString &obj);
};

std::ostream& operator<< (std::ostream &os, const MyString &obj) {
   os << obj._t;
   return os;
}
int main(int argc, char *argv[])
{
   MyString str = "test";
   MyString str2 = str;
   std::cout << str << endl;

   return EXIT_SUCCESS;
}