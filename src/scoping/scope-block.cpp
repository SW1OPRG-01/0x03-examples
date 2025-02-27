#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::string declared_in_main = "main";
  std::cout << "main\t\t" << declared_in_main << std::endl << std::endl;
  
  if(true) {
    std::string declared_in_block_1 = "block 1";
    std::cout << "block 1\t\t" << declared_in_block_1 << std::endl;
    std::cout << "main\t\t" << declared_in_main << std::endl << std::endl;
    {
      std::string declared_in_main = "main (from block 2)";
      std::string declared_in_block_1 = "block 1 (from block 2)";
      std::string declared_in_block_2 = "block 2";
      std::cout << "block 2\t\t" << declared_in_block_2 << std::endl;
      std::cout << "block 1\t\t" << declared_in_block_1 << std::endl;
      std::cout << "main\t\t" << declared_in_main << std::endl;
    }
  }

  return 0;
}