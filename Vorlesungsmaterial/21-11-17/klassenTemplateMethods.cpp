#include <iostream>
#include <vector>

/*
* nur ein Beispiel für Template-Klassen
* die STL liefert bereits ein array mit std::array
*/
template <typename T, int N>
class Array
{

public:
   T _elem[N]; // c-array welches die Länge enthält

   Array(){};
   int getSize() const;

   template <typename T2>
   Array<T, N> &operator=(const Array<T2, N> &arr)
   {
      if ((void *)this == (void *)&arr) // sicherstellen, dass man nicht auf sich selber zeigt
         return *this;
      // kopiere vom Anfang des elemnts bis element + N mit std::copy
      std::copy(arr._elem, arr._elem + N, _elem);
      return *this; // gebe das Array zurück.
   }
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
   Array<double, 10> doubleArray;

   doubleArray = intArray;

   std::cout << "intArray.getSize(): " << intArray.getSize() << std::endl;

   Array<std::string, 10> strArray;
   Array<int, 100> bigIntArray;

   // doubleArray= strArray;        // ERROR: cannot convert ‘const std::basic_string<char>’ to ‘double’
   // doubleArray = bigIntArray;    // ERROR: no match for ‘operator=’ in ‘doubleArray = bigIntArray (zu groß mit 100 Elementen)

   return EXIT_SUCCESS;
}