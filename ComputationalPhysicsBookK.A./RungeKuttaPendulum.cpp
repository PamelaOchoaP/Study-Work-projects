#include <iostream>
#include<cmath>

const double k=0.1;
const double m=1.;
const double dt=0.1;

double dxdt(double x,  double v,  double t);
double dvdt(double x, double v,  double t);
void Rk(double  & x, double & v,  double & t);

int main (void){
double x=0, v=1;
double t=0;

for (int i=0;  i<1000; i++){
std::cout<<t<<' '<<x<<' '<<v<<std::endl;
Rk(x,v,t);

}


return 0;
}

double dvdt(double x,  double v,  double t){
return -k*x/m;
}
double dxdt(double x, double v,  double t){
return v;
}

void Rk(double & x1, double & v1,  double & t1){
double k1,k2,k3,k4;
double l1,l2,l3,l4;

k1=dt*dxdt(x1,v1,t1);                       l1=dt*dvdt(x1,v1,t1);		
k2=dt*dxdt(x1+k1/2., v1+l1/2., t1+dt/2.);   l2=dt*dvdt(x1+k1/2., v1+l1/2., t1+dt/2.);
k3=dt*dxdt(x1+k2/2., v1+l2/2., t1+dt/2.);   l3=dt*dvdt(x1+k2/2., v1+l2/2., t1+dt/2.);
k4=dt*dxdt(x1+k3, v1+l3, t1+dt);            l4=dt*dvdt(x1+k3, v1+l3, t1+dt);

x1+=(k1+2.*k2+2.*k3+k4)/6;
v1+=(l1+2.*l2+2.*l3+l4)/6;
t1+=dt;
}
