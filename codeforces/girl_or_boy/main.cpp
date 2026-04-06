#include <algorithm>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::string str1;

  std::cin >> str1;

  std::sort(str1.begin(), str1.end());

  str1.erase(std::unique(str1.begin(), str1.end()), str1.end());

  if (str1.length() % 2) {
    std::cout << "IGNORE HIM!" << std::endl;
  } else {
    std::cout << "CHAT WITH HER!" << std::endl;
  }

  return 0;
}
