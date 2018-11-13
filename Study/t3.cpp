#include<iostream>
#include<cmath>

class formita{
private:
double x=0;

public:
void initial_cond(int x0);
double getx(void){return x;};
};

void formita::initial_cond(int x0){
x=x0;
}

double f(double y,const double & q){
return y*y;
}

int main (){
double w=0;
double p=0;
for (double x=0; x<10; x+=0.01){
p=f(x,w);
}
formita cuadrito;
std::cout<<cuadrito.getx()<<std::endl;
cuadrito.initial_cond(2);

std::cout<<cuadrito.getx()<<std::endl;
return 0;
}
