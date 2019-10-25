#include <cmath>
#include <iostream>
using namespace std;

int main(){
   int entero_a, entero_b, producto;
   bool entero_a_positivo, entero_b_positivo, mismo_signo = false;

   cout << "\nIntroduzca los dos números enteros, a y b: ";
   cin >> entero_a >> entero_b;

   entero_a_positivo = entero_a > 0;
   entero_b_positivo = entero_b > 0;

   mismo_signo = (entero_a_positivo && entero_b_positivo) || ( !(entero_a_positivo || entero_b_positivo) );

   if (mismo_signo)
      cout << "\n\nTienen el mismo signo.\n\n";
   else
      cout << "\n\nNo tienen el mismo signo.\n\n";

}
