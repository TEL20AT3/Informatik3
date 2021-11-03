#include <iostream>

class A
{
   int _a;

public:
   A(int a = 0) : _a(a) {}
   virtual void ausgabe()
   {
      std::cout << "Hello a: " << _a << std::endl;
   }
};

class B : public A
{
   int b;

public:
   virtual void ausgabe() {}
   B(int b = 0) : A(b) {}
};

class C : public A
{
   int c;

public:
   virtual void ausgabe() {}
   C(int c = 0) : A(c) {}
};

class D : public B, public C
{
   int d;

public:
   // void ausgabe() {}
   D(int d = 0) : B(d), C(d) {}
};

int main()
{
   D d;
   B b(5);
   b.ausgabe();
   // d.B::ausgabe();
   // d.C::ausgabe();
   d.ausgabe(); // --> ERROR
   return EXIT_SUCCESS;
}