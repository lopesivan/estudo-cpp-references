#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main() {

  int a = 5;
  int &ref = a;
  LOG(a);
  LOG(ref);

  a = 10;
  LOG(a);
  LOG(ref);

  ref = 99;
  LOG(a);
  LOG(ref);

  return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
