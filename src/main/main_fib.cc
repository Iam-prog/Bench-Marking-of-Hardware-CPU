
#include "src/lib/cpplib.h"
#include <iostream>
#include <map>
#include <vector>

int main() {

  CPPLib s;
  std::cout << s.PrintHelloWorld() << std::endl;
  
  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::map<int, int> results;
  
  for (const auto i : v) {
    int r = s.fib(i);
    results[i] = r;
    std::cout << "r: " << r << std::endl;
  }

  for (auto r : results) {
    std::cout << "r.first: " << r.first << ", r.second: " << r.second
              << std::endl;
  }

  return 0;
}