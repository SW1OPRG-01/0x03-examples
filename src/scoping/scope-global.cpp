#include <iostream>
#include "print.h"

int global_int = 42;

void print_global_int_from_main() {
  std::cout << "global_int (global_int_from_main)\t" << global_int << std::endl;
}

int main(int argc, char *argv[]) {
  std::cout << "global_int (main)\t\t\t" << global_int << std::endl;
  print_global_int_from_main();
  print(1337);
  return 0;
}