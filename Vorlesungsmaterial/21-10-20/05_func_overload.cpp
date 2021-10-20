#include "../header.h"

void quadrat (int x) {
  (x) = (x) * (x);
}
void quadrat (int *x) {
  (*x) = (*x) * (*x);
}
void quadrat_ref (int &x) {
  x = x * x;
}

void ausgabe (int x){
  cout << "Integer = " << x << endl;
}
void ausgabe (double x) {
  cout << "Double = " << x << endl;
}

int main () {
  int k = 2;
  int k_ptr = 3;
  int k_ref = 4;
  quadrat(k);
  quadrat(&k_ptr);
  quadrat_ref (k_ref);

  cout << "k = " << k << endl;
  cout << "k_ptr = " << k_ptr << endl;
  cout << "k_ref = " << k_ref << endl;

  ausgabe(2);
  ausgabe(3.141);

  return EXIT_SUCCESS;
}