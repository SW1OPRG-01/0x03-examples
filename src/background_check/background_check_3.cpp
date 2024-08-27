#include <iostream>
#include <string>
#include <vector>

void prompt(std::string question, std::vector<std::string>& answers) {
  std::string answer;
  std::cout << question;
  std::getline(std::cin, answer);
  answers.push_back(answer);
} 

int main(int argc, char* argv[]) {
  std::vector<std::string> questions = {
    "What is your name?", 
    "Where were you last employed?", 
    "Have you lived abroad?", 
    "Where did you go to high school?"
  };
  std::vector<std::string> answers;
  std::string answer;
  
  for(std::string question : questions) {
    prompt(question, answers);
  }
  
  return 0;
}