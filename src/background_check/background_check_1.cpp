#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  // Declare variables
  std::vector<std::string> answers;
  std::string answer;

  // Get user input
  std::cout << "What is your name? ";
  std::getline(std::cin, answer);
  answers.push_back(answer);
  std::cout << "What is your name? ";
  std::getline(std::cin, answer);
  answers.push_back(answer);
  std::cout << "What is your name? ";
  std::getline(std::cin, answer);
  answers.push_back(answer);
  std::cout << "What is your name? ";
  std::getline(std::cin, answer);
  answers.push_back(answer);

  return 0;
}