#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> answers;
  std::string answer;

  std::cout << "What is your name?";
  std::getline(std::cin, answer);
  answers.push_back(answer);
  std::cout << "Where were you last employed?";
  std::getline(std::cin, answer);
  answers.push_back(answer);
  std::cout << "Have you lived abroad?";
  std::getline(std::cin, answer);
  answers.push_back(answer);
  std::cout << "Where did you go to high school?";
  std::getline(std::cin, answer);
  answers.push_back(answer);

  return 0;
}