#include<iostream>


int main(void){

int n;	//print the number 1 to 10 using while
n=1;
while (n<=10){

std::cout<<n<<std::endl;
++n;
}

//check if a number is odd or even using if 

int num;
std::cout<<"Escriba el numero: "<<std::endl; //ask for the number
std::cin>>num; //read the number

if (num%2==0){ //check if the number is even
std::cout<<"El numero es par"<<std::endl;
}
else{
std::cout<<"El numero si es impar"<<std::endl;
}
if (num%2!=0){
std::cout<<"El numero es impar"<<std::endl;
}


return 0;

}
