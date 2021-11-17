#include <iostream>
#include <vector>

template <class P>
void ausgabe(P a_beginn, P a_end)
{
   for (; a_beginn != a_end; ++a_beginn)
   {
      std::cout << *a_beginn << std::endl;
   }
}

void array_iterator()
{
   int a[10];           // Container (Array) mit 10 Elementen vom Typ int
   int *p;              // Iterator (Zeiger) auf Typ int
   int *a_beginn = a;   // &a[0] Iterator: Container-Anfang
   int *a_end = a + 10; // Iterator der Hinter das letzte Element zeigt
   //       __________________
   //       |0|1|2....___|8|9|
   //       ^                 ^
   //  a_beginn               a_end

   ausgabe(a_beginn, a_end);
}

template <class P, class V>
int counter(P a_beginn, P a_end, V search_item)
{
   // zählt die Anzahl der vorkommnise von search_item
   int n = 0;
   while (a_beginn != a_end)
   {
      if (*(a_beginn++) == search_item)
         n++;
   }
   return n;
}

void vector_iterator()
{
   std::vector<int> a(10);
   a[1] = 1;
   a[2] = 1;
   ausgabe(a.begin(), a.end());

   std::cout << "counter: " << counter(a.begin(), a.end(), 1)
             << std::endl;
}

int main()
{
   std::cout << "array: \n";
   array_iterator();

   std::cout << "vector: \n";
   vector_iterator();
}