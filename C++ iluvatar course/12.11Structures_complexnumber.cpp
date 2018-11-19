#include <iostream>

struct complex {
double x=0, y=0;
};


 void print(const complex & c);
 complex sum(const complex & a, const complex & b);

int main(void){
complex a,b,c;
a.x=2; a.y=0;
b.x = -2.4565464; b.y = 100.09809;
c=sum(a, b);
print (c);
return 0;

}


void print(const complex & c){
std::cout<<c.x<<"  "<<c.y<< std::endl;
}

complex sum(const complex & a, const complex & b){
complex c;
c.x=a.x+b.x;
c.y=a.y+b.y;
return c;

}
