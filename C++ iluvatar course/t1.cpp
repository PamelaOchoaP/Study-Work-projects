#include<iostream>
#include <cmath>




int main (){
long int s=0;
long int m=0;
for (int i=0;i<1000;i+=1){
s+=i;
if (i%2==0){
m+=i;
std::cout<< i<<'\t'<<s<<'\t'<<m<<std::endl;
}}
return 0;
}
