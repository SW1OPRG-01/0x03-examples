#include <iostream>
#include "print.h"

int global_int = 42;

void print_global_int_from_main() {
  std::cout << "global_int_from_main " << global_int << std::endl;
}

int main(int argc, char *argv[]) {
  std::cout << "global_int from main" << global_int << std::endl;
  print_global_int_from_main();
  return 0;
}