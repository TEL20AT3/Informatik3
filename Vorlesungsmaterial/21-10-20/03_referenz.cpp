#include "header.h"

void quadrat (int *x) {
  (*x) = (*x) * (*x);
}

void quadrat_ref (int &x) {
  x = x * x;
}

int main () {
   int k_ptr = 2;
   quadrat (&k_ptr);

   return EXIT_SUCCESS;
}
