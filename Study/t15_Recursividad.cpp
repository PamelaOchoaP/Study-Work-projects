#include<iostream>

long factorial (long a){
if (a>1)
return (a*factorial (a-1)); //calculando un factorial
else
return 1;

}

int main(void){
long long numero=50;
std::cout<<numero<<"!=  "<<factorial(numero)<<std::endl;
return 0;


}

