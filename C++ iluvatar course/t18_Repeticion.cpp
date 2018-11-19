#include<iostream>

//sum numbers from 1 to 10 using for
/*
double sumfor(int N){
int n=0, sum=0;
for(n=1; n<=N; n++){
sum +=n;
}
return sum;
}
int main (void){
std::cout<<sumfor(10)<<std::endl;
return 0;
}
*/
 //sum numbers 1 to 10 using while

double sumfor(int N){
int n=0,sum=0;
for(n=1; n<=N; n++){
sum +=n;
}
return sum;
}

double sumwhile(int N){
int n=1, sum=0;
while (n<=N){
sum +=n;
n++;
}
return sum;
}

double sumdowhile(int N){ //con do-while
int n=1, sum=0;
do{
sum +=n;
n++;
}
while(n<=N);
return sum;
}

int main(void){
std::cout<<sumfor(10)<<std::endl;
std::cout<<sumwhile(10)<<std::endl;
std::cout<<sumdowhile(10)<<std::endl;
return 0;

}
