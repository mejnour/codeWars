// An isogram is a word that has no repeating letters, 
// consecutive or non-consecutive. Implement a function that 
// determines whether a string that contains only letters is an 
// isogram. Assume the empty string is an isogram. Ignore 
// letter case.

// Example: (Input --> Output)

// "Dermatoglyphics" --> true
// "aba" --> false
// "moOse" --> false (ignore letter case)

#include <string>
#include <iostream>
using namespace std;

bool is_isogram(std::string str) {
  for(int i = 0; i != str.length(); ++i) {
    for(int j = i + 1; j != str.length(); ++j) {
      if(tolower(str[i]) == tolower(str[j])) {
        return false;
      }
    }
  }
  return true;
}

int main() {
  std::string str = "helo";
  cout << is_isogram(str) << endl;
}