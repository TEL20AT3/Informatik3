#include "../header.h"

class Person
{
protected: // abgeleite Funktionen haben Zugriff
   string _name;
   int _geburtsjahr;

public:
   Person(string name, int geburtsjahr) : _name(name), _geburtsjahr(geburtsjahr) {}
   virtual void ausgabe()
   {
      cout << "Person: " << _name << endl;
   }
};

class Student : public Person
{
   int _matrikel_nr = 0;

public:
   Student(string n, int j, int m): Person(n, j)
   {
      _matrikel_nr = m;
   }
   using Person::Person;   // Damit kann man den Konstruktur von Person nutzen
   virtual void ausgabe()
   {
      cout << "Student: Name: " << _name << "\tmatrikel_nr: " << _matrikel_nr << endl;
   }
};

void p (Person &x) {
   x.ausgabe();
}
void s (Student &x) {
   x.ausgabe();
}
void s_P (Student &x) {
   x.Person::ausgabe();
}

int main(int argc, char *argv[])
{
   char str[]  = "test";
   cout << str << endl;
   Person *p_ptr1;
   Person p1("Olaf", 1985);
   p1.ausgabe();     // Person::ausgabe()
   Student s1("Frank", 1995, 1234);
   s1.ausgabe();     // Student::ausgabe()
   Student s2("Peter", 1990);    // --> Möglich durch using Person::Person
   s2.ausgabe();

   p_ptr1 = &s1;     // Pointer Person zeigt auf Student
   p_ptr1->ausgabe();      // Student::ausgabe()

   p(s1);
   s(s1);
   s_P(s1);

   return EXIT_SUCCESS;
}