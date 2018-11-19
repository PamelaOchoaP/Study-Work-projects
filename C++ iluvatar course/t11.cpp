#include<iostream>


int f(int a);   //declarando

int main(void){
/*
int a=9;
std::cout<<&a<<std::endl; //no imprime U%&Y%TW

f(a);

std::cout<<a<<std::endl; //imprime el valor declarado a=9
return 0;
}

void f(int a){ //implementacion
std::cout<<a<<std::endl; //imprime positivo
std::cout<<a<<std::endl; //imprime positivo
a=-9;
std::cout<<a<<std::endl; //luego de poner está linea el cuarto si imprime negativo
*/

int a=9;
int b=f(a);
std::cout<<"b=   "<<b<<std::endl;

return 0;
}

//implementacion

int f(int a){
return 2*a;
}
