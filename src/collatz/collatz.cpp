#include "collatz.h"
#include <iostream>

int collatz(int number) {
  if(number <= 0) {
    std::cout << "number must be greater than 0" << std::endl;
    return -1;
  }
  
  if(number == 1) {
    return 1;
  }
  
  if(number % 2 == 0) {
    number = number / 2;
  } else {
    number = number * 3 + 1;
  }
  std::cout << number << " ";
  return collatz(number);
}

void collatz_no_recursion(int i) {
  int result = i;
  while(result != 1) {
    std::cout << result << " ";    
    if(result % 2 == 0) {
     result  = result / 2;
    } else {
      result = result * 3 + 1;
    }
  }
  std::cout << result << " ";    
}