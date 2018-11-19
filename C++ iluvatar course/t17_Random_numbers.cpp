#include<iostream>
#include<random>

int main(void){
int seed=0;
std::mt19937 gen(seed);
std::normal_distribution<>dis(1.5,0.3);

	for (int n=0; n< 100000; n++){
	std::cout<<dis(gen)<<'\n';	

	}
std::cout<< '\n';
}
/*
Para graficar un histograma en gnuplot

binwidth=0.1 (ancho) 
bin(x,width)=width*floor(x/width)
plot 'nombredelarchivo' using (bin($1,binwidth)):(1.0) smooth freq with boxes
*/
