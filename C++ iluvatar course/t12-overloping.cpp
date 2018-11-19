#include<iostream>
#include<cmath>
/*
double f(double a);  //declarar

int main(void){
double a=M_PI/4.0;
double b=f(a);

std::cout<<"b=   "<<b<<std::endl;

return 0;

}

//implementacion

double f(double a){
return 2*std::sin(a)*std::cos(a); //funcion
}
*/
//importante
int f(int a);
double f(double a);   //o g

int main(void){
int a=9;
std::cout<<"f(a)=  "<<f(a)<<std::endl;
double b=-7.51;
std::cout<<"f(b)=  "<<f(b)<<std::endl; //o g
return 0;
}


int f(int a){
return 2*a;
}


double f(double a){ /// o g
return 2*a;
}
