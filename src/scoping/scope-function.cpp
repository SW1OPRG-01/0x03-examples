#include <cmath>
#include <iostream>

double length(double x, double y);

int main(int argc, char* argv[]) {
  
  double x = .37f;
  std::cout << x << std::endl;
  std::cout << length(.64f, -.32f) << std::endl;
  return 0;
}

double length(double x, double y) {
  std::cout << x << " " << y << std::endl; 
  return sqrt(pow(x, 2) + pow(y, 2));
}