#include <iostream>
#include <vector>

/*
* nur ein Beispiel für Template-Klassen
* die STL liefert bereits ein array mit std::array
*/
template <typename T, int N>
class Array
{

   T _elem[N];  // c-array welches die Länge enthält

public:
   Array() {};
   int getSize() const;
};

/*
* Implementierung der Methode ist ähnlich wie sonst auch bei Klassen Methoden,
* Template Paramter müssen aber vor der Methode angegben werden
*/
template <typename T, int N>
int Array<T, N>::getSize() const
{
   return N;
}

int main()
{
   std::cout << std::endl;
   Array<int, 10> intArray;

   std::cout << "intArray.getSize(): " << intArray.getSize() << std::endl;

   std::cout << std::endl;

   return EXIT_SUCCESS;
}