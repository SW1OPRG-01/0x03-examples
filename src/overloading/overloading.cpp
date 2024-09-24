#include <iostream>
#include "sum.h"

int main(int argc, char** argv) {
  
  std::vector<int> int_values = { 1, 2, 4, 8, 16, 32 };
  std::vector<double> double_values = { 1.2, 2.4, 4.8, 8.16, 16.32 };

  std::cout << sum(1, 1)<< std::endl;
  std::cout << sum(1.2, 2.4) << std::endl;
  std::cout << sum(int_values) << std::endl;
  std::cout << sum(double_values) << std::endl;

  return 0;
}