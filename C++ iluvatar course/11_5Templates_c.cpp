//funcion template class example

#include <iostream>

template <class T>
T sum (T a, T b)
{
T result;
result=a+b;
return result;
}

int main (void){
int i=5, j=6,k;
double f=2.0, g=0.5, h;
k=sum<int>(i,j);
h=sum<double>(f,g);
std::cout<<k<<'\n';
std::cout<<h<<'\n';

return 0;

}
