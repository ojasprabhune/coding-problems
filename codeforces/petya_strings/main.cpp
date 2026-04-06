#include <cctype>
#include <iostream>
#include <string>

int main() {
  std::string str1, str2;

  std::cin >> str1;
  std::cin >> str2;

  // convert both strings to lowercase
  for (char &c : str1) {
    c = tolower(c);
  }

  for (char &c : str2) {
    c = tolower(c);
  }

  // str1 < str2 means str1 comes before str2 in lexicographical order
  // specifically, the comparison is done character by character, and the first
  // character that differs determines the order
  if (str1 < str2) {
    std::cout << -1 << std::endl;
  } else if (str2 < str1) {
    std::cout << 1 << std::endl;
  } else if (str1 == str2) {
    std::cout << 0 << std::endl;
  }

  return 0;
}
