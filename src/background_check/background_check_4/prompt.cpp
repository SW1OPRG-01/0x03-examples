#include <iostream>
#include "prompt.h"

void prompt(std::string question, std::vector<std::string>& answers) {
  std::string answer;
  std::cout << question;
  std::getline(std::cin, answer);
  answers.push_back(answer);
}