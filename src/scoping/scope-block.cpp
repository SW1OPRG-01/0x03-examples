#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
string declared_in_main = "main";
cout << "main\t\t" << declared_in_main << endl << endl;
  
  if(true) {
string declared_in_block_1 = "block 1";
cout << "block 1\t\t" << declared_in_block_1 << endl;
cout << "main\t\t" << declared_in_main << endl << endl;
    {
      string declared_in_main = "main (from block 2)";
      string declared_in_block_1 = "block 1 (from block 2)";
      string declared_in_block_2 = "block 2";
      cout << "block 2\t\t" << declared_in_block_2 << endl;
      cout << "block 1\t\t" << declared_in_block_1 << endl;
      cout << "main\t\t" << declared_in_main << endl;
    }
  }

  return 0;
}