#include<iostream>
#include<cmath>

int subtraction (int a,  int b){
int r;
r=a-b;
return r;
}
int main (void){
int x=5, y=3, z;
z=subtraction(7,2);
std::cout<<"El primer resultado es"<<z<<'\n';
std::cout<< "El segundo resultado es"<< subtraction(7,2)<<'\n';
std::cout<<"El tercer resultado es"<<subtraction(x,y)<<'\n';
z=4+subtraction(x,y);
std::cout<<"El cuarto resultado es"<<z<<'\n';

return 0;

}
