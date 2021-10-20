#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void print_v(vector<string> &vec) {
   for (auto el: vec) {
      cout << el << endl;
   }
}

void map_ () {
   map<string, int> m { {"GPU", 30}, {"SSD", 128} };
   m["CPU"] = 20;

   for (const auto& [key, value] : m) {
      std::cout << key << " = " << value << "; ";
    }
}

int main () {
   string str1("Hallo"), str2 = "wie gehts", str3;
   str3 = str1;
   str3 += str2;

   vector<string> vec1;
   vec1.push_back(str1);
   vec1.push_back(str2);
   vector<string> vec2 (vec1);

   cout << " Der Wert von str3 = " << str3 << endl;

   cout << " Size von vec2 = " << vec2.size() << endl;
   print_v(vec1);
   print_v(vec2);

   map_();
   return EXIT_SUCCESS;
}