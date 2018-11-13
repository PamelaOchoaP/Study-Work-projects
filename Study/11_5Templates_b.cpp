#include <iostream>

int sum (int a, int b)

{
return a+b;
}

double sum (double a,  double b){
return a+b;
}

int main (void){

std::cout<<sum (10,20)<<'\n';
std::cout<<sum(1.0,1.5)<<'\n';
return 0;
}
