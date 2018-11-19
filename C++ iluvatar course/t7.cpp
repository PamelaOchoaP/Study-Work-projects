#include <iostream>
#include <cmath>
//logica y modulos
int main(void){
int a=0;
std::cout<<"Por favor escriba un entero: \n";
std::cin >>a;

if (a%3==0){   //Comparar el residuo con cero, si aplica, imprimir que es divisible
std::cout<< "Numero" << a << "es divisible entre 3 \n";
}
else {
std::cout<< "Numero" << a << "No es divisible entre 3\n";
}



//operador terniario

std::cout<<"Por favor escriba un entero: \n";
std::cin >>a;
std::cout <<"Numero "<< a;
(a%3==0) ? std::cout << "es" : std::cout << "no es";  //es una forma directa 
std::cout << "es divisible entre 3\n";

/// no funciona,  organizar de menor a mayot comparando

int  aa=0, b=0, c=0;
int min=0, mid=0, max=0;

std::cout << "Escriba tres \n";
std::cin >> aa >> b >> c;
 
   min = aa; mid = b; max = c;
if (min > mid) {
}
if (aa > b && aa > c) {
max = aa;
     if (b > c) {
       min = c; mid = b;
     }
}
 
   std::cout << min << "\t" << mid << "\t" << max << "\n";

return 0;

}
