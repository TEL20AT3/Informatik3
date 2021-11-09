#include <iostream>

class A
{
   int _a;

public:
   A(int a = 0) : _a(a) {}
   void ausgabe()
   {
      std::cout << "Hello a: " << _a << std::endl;
   }
};

class B : virtual public A
{
public:
   B(int b = 0) : A(b) {}
};

class C : virtual public A
{
public:
   C(int c = 0) : A(c) {}
};

class D : public B, public C
{
public:
   // Konstruktor von A muss hier aufgerufen werden damit A._a einn Wert zugewiesen wird
   D(int d = 0) : B(d), C(d), A(d) {}
};

int main()
{
   B b(5);
   C c(10);
   D d(44);
   b.ausgabe();
   c.ausgabe();
   d.ausgabe();
   return EXIT_SUCCESS;
}