#include<iostream>
#include<cmath>
//no entiendo nada en algún caso imprime y en otros no

void f(int a){
std::cout<<a<<std::endl;
std::cout<<&a<<std::endl;
a=-9;
}

int main(void){
int a=9;			//imprime sólo el positivo en ambos casos
std::cout <<&a<< std::endl;
f(a);
std::cout<<a<<std::endl;
return 0;
}
