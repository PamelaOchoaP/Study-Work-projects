#include<iostream>
#include<cmath>

const double PI=3.1415926;

int main(void){

int a=0, b=0;
std::cout<<"Escriba dos enteros:\n";
std::cin >> a >> b;
std::cout << "suma:" <<a+b << std::endl;
std::cout << "resta:" << a-b << std::endl;
std::cout << "multiplicacion:" <<a*b << std::endl;
std::cout << "division:" << a / b << std::endl;
std::cout << "modulo:" << a%b << std::endl;

int max =0;
if (a>b){
max=a;
}
else {
max=b;
}
std::cout << max << std::endl;


std::string mystring, mystring2;
mystring ="Esto es una cadena";
mystring2="Otra cadena";
std::cout << mystring+mystring2;


double x=3;
std::cout << x<< std::endl;
double xx=5;
std::cout <<xx<<std::endl;
std::cout <<PI<<std::endl;


return 0;
}


