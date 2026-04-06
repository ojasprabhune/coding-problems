#include <iostream>
#include <list>
#include <string>

int main() {
  std::string str1;

  std::cin >> str1;
  std::list<int> numbers;

  for (int i = 0; i < str1.length(); i++) {
    if (str1[i] != '+') {
      numbers.push_back(str1[i] - '0');
    }
  }

  std::string result;

  numbers.sort();
  for (int number : numbers) {
    result += std::to_string(number) + "+";
  }

  result.pop_back();

  std::cout << result << std::endl;

  return 0;
}
