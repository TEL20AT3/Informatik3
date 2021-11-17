#include <iostream>
#include <exception>
#include <vector>

using namespace std;

struct MyException : public exception
{
   const char *what() const throw()
   {
      return "C++ Exception";
   }
};

void funcWithException()
{

   vector<int> myVec{1, 2, 3, 4, 5};
   try
   {
      myVec.at(5) = 6;
   }
   catch (const std::out_of_range &e)
   {
      // Information der Exception ausgeben
      cerr << "Exception: " << e.what() << endl;
      // Zeile und Datei Ausgeben in der die Exception geworfen wurde
      cerr << "Line: " << __LINE__ << " in " << __FILE__ << endl;
      throw;
   }
}

int mittel(int daten[], int count)
{
   if (count == 0)
   {
      throw "falscher teiler";
   }
   else
   {
      int sum = 0;
      for (int i = 0; i < count; i++)
      {
         sum += daten[i];
      }
      return sum / count;
   }
}

int main()
{
   int daten[] = {3, 4, 6};
   try
   {
      cout << "Rufe Funktion mittel(daten, 0) auf:\n";
      cout << mittel(daten, 0) << endl;
   }
   catch (const char *msg)
   {
      cerr << msg << '\n';
   }
   cout << endl;
   try
   {
      cout << "Rufe Funktion funcWithException() auf, vector out of range:\n";
      funcWithException();
   }
   catch (const bad_alloc &e)
   {
      cerr << "bad_alloc" << endl;
   }
   catch (const std::exception &e)
   {
      std::cerr << "std::exception" << std::endl;
   }
   catch (...)
   {
      std::cerr << "Ellipse" << std::endl;
   }

   cout << endl;

   MyException myExcept;

   try
   {
      throw myExcept;
   }
   catch (const MyException &e)
   {
      std::cerr << e.what() << std::endl;
      std::cerr << std::endl;
      throw;
   }
   cout << endl;
}