#include<iostream>

template <class T>

T f(T a){
return 2*a;
}


int main (void){
int a=9;
std::cout<<"f(a)= "<< f(a)<<std::endl;
double b=-7.51;
std::cout<<"f(b)= "<<f(b)<<std::endl;
float c=27.51;
std::cout << "f(c)= "<<f(c)<<std::endl;

return 0;
}
