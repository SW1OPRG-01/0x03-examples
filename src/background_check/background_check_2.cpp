#include <iostream>
#include <string>
#include <vector>

void question(std::string question, std::vector<std::string>& answers) {
  std::string answer;
  std::cout << question;
  std::getline(std::cin, answer);
  answers.push_back(answer);
} 

int main(int argc, char* argv[]) {
  std::vector<std::string> answers;
  std::string answer;

  question("What is your name?", answers);
  question("Where were you last employed?", answers);
  question("Have you lived abroad?", answers);
  question("Where did you go to high school?", answers);

  return 0;
}