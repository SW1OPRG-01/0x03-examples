#include "prompt.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> questions = {
    "What is your name? ", 
    "Where were you last employed? ", 
    "Have you lived abroad? ", 
    "Where did you go to high school? "
  };
  std::vector<std::string> answers;
  std::string answer;

  sum(4, 8);
  
  for(std::string question : questions) {
    prompt(question, &answers);
  }
  
  return 0;
}