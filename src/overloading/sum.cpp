#include "sum.h"

int sum(int a, int b) {
  return a + b;
}

double sum(double a, double b) { 
  return a + b;
}

int sum(std::vector<int> values) {
  int result = 0;
  for(int value : values) {
    result += value;
  }
  return result;
}

double sum(std::vector<double> values) {
  double result = 0;
  for(double value : values) {
    result += value;
  }
  return result;
}