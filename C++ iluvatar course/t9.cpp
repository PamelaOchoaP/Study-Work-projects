#include<iostream>
#include<cmath>

//ejemplo de funcio

int suma(int a,  int b){   //con a y b variables locales
int r;
r=a+b;
return r;
}

int main(void){
int z;
z=suma(3,5);
std::cout << "El resultado es " << z;
}
