#include <iostream>
#include <string>

using namespace std;

class Abstract
{
public:
   virtual ~Abstract() =0;
};

Abstract::~Abstract() {}

class Concret : public Abstract
{
};

class Person // virtuelle Basisklasse Person
{
protected: // abgeleite Funktionen haben Zugriff
   string _name;
   int _geburtsjahr;

public:
   Person() : _name(""), _geburtsjahr(0) {}
   Person(string name, int geburtsjahr) : _name(name), _geburtsjahr(geburtsjahr) {}
   void ausgabe()
   {
      cout << "Person: " << _name << endl;
   }

   virtual string getGeschlecht() = 0;
};

class Frau : public Person
{
public:
   Frau(string name, int geburtsjahr) : Person(name, geburtsjahr) {}

   string getGeschlecht()
   {
      return "Frau";
   }
};
class Mann : public Person
{
public:
   Mann(string name, int geburtsjahr) : Person(name, geburtsjahr) {}

   string getGeschlecht()
   {
      return "Mann";
   }
};

int main()
{

   // Abstract abstract;    // ERROR
   Concret concret;

   // Person p; // ERROR

   Frau f("Petra", 1970);
   Mann m("Peter", 1965);
   f.ausgabe();
   m.ausgabe();

   cout << "f.getGeschlecht: " << f.getGeschlecht() << endl;
   cout << "m.getGeschlecht: " << m.getGeschlecht() << endl;
   return EXIT_SUCCESS;
}