#include <iostream>
#include <array>

const int N = 10;

void initialize(std::array<double, N> & a);
void print(const std::array<double, N> & a);
void average(const std::array<double, N> & a);

int main(void)
{
  // double data[N]{0};
  std::array<double, N>  data {0};

  // initialize the array with even numbers
  initialize(data);

  // print the array
  print(data);

  // compute mean
  average(data);

  return 0;
}


void print(const std::array<double, N> & a)
{
  // print the array
  for(int ii = 0; ii < a.size(); ++ii){
    std::cout << a[ii] << std::endl;
  }
}

void average(const std::array<double, N> & a)
{
  double sum = 0.0;
  for(int ii = 0; ii < a.size(); ++ii){
    sum += a[ii];
  }
  std::cout << "Average = " << sum/a.size() << std::endl;
}

void initialize(std::array<double, N> & a)
{
  for(int ii = 0; ii < a.size(); ++ii){
    a[ii] = 2*ii;
  }
}
