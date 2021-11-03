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
   int b;

public:
   B(int b = 0) : A(b) {}
};

class C : virtual public A
{
   int c;

public:
   C(int c = 0) : A(c) {}
};

class D : public B, public C
{
   int d;

public:
   D(int d = 0) : B(d), C(d) {}
};

int main()
{
   D d(44);
   B b(5);
   b.ausgabe();
   d.ausgabe();
   return EXIT_SUCCESS;
}