#include<iostream>

int addition(const int &a,  int b){ // pasando por referencia
int r;
r=a+b;
//a=r;
return r;
}
/*
int addition(int &a,  int b){ // pasando por referencia
int r;
r=a+b;
a=r;
return r;
}
*/




int main (void){
int z,x,y;
x=5;
y=3;
z= addition(x,y);
std::cout<<"El resultado es "<< z <<std::endl; // para conocer la direccion de memoria &z
std::cout<<"El valor de x es "<<x << std::endl;
return 0;
}
