#include <iostream>
#include "sum.h"

using namespace std;

int main(int argc, char** argv) {
  
  vector<int> int_values = { 1, 2, 4, 8, 16, 32 };
  vector<double> double_values = { 1.2, 2.4, 4.8, 8.16, 16.32 };

  cout << sum(1, 1)<< endl;
  cout << sum(1.2, 2.4) << endl;
  cout << sum(int_values) << endl;
  cout << sum(0.5f, 1);
  cout << sum(double_values) << endl;

  return 0;
}