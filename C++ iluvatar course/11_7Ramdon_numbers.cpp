#include <random>
#include <iostream>

int main (){
int seed=0;
std::mt19937 gen(seed);
//std::uniform_real_distribution <> dis(1,2);
std::normal_distribution<>dis(100,0.3); //rango e intervalo
for(int n=0; n<10000; n++){
 //Use dis to transform the random unsigned int generated by gen into a double in [1, 2)
std::cout<<dis(gen)<<'\n';  //each call to dis(gen) generates a new random double
}
std::cout<<'\n';
}
