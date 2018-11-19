#include <iostream>

const int N=10;

int main (void){
double data[N] {0};

for(int ii=0; ii<N;++ii){
data[ii]=2*ii;

}

for(int ii=0; ii<N; ++ii){
std::cout<<data[ii]<<std::endl;

}

double sum=0.0;
for(int ii=0; ii<N; ++ii){
sum+=data[ii]; //suma cada valor
}
std::cout<<"Avarage= "<<sum/N<<std::endl;
}
