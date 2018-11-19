#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>  
#include <cmath>


#define PI 3.1415926
#define g 9.81


int main(){
//Declaration of variables

double x0, y0, R, x, y, vx, vy, t, tf, dt;
double theta, v0x,v0y,v0;


v0=10;
theta=45;
tf=1.44;
dt=0.001;

theta=(PI/180.)*theta;
v0x=v0*cos(theta);
v0y=v0*sin(theta);



std::ofstream myfile("test.dat");
myfile.precision(17);

//Compute :
t = 0.0 ;
while ( t <= tf ) {
x = v0x * t ;
y = v0y * t -0.5*g*t*t;
vx = v0x ;
vy = v0y -g * t ;
myfile << t << " "
<< x << " " << y << " "
<< vx << " " << vy << std::endl;
t = t + dt ;
}
}
