// Eddie Cortes
// ecccortes@csu.fullerton.edu
// @eccortes4
// Partners: @AlexisCornejoCSUF

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() == 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum{0.0};
  bool first{true};
  for (const std::string& num : arguments) {
    if (first) {
      first = false;
      continue;
    }
    sum += std::stod(num);
  }

  double average{};
  double numbers{static_cast<double>(arguments.size())};
  average = sum / (numbers - 1);

  std::cout << "average = " << average << '\n';

  return 0;
}
