#include <iostream>

struct A{
  A(){
    std::cout << "Constructor A" << std::endl;
  }
  ~A(){
    std::cout << "Destructor A" << std::endl;
  }
};

struct B: A{
  B(){
    std::cout << "  Constructor B" << std::endl;
  }
  ~B(){
    std::cout << "  Destructor B" << std::endl;
  }
};

struct C: B{
  C(){
    std::cout << "    Constructor C" << std::endl;
  }
  ~C(){
    std::cout << "    Destructor C" << std::endl;
  }
};

int main(){

  std::cout << std::endl;

  C* c= new C;

  delete c;

  std::cout << "\n\n";

  {
    C c2;
  }
  std::cout << "Hello world!"  << std::endl;
  std::cout << std::endl;

}
